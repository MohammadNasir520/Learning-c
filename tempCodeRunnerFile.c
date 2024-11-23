
    int n;
    scanf("%d", &n); // Input the size of the array

    int arr[n];
    int maxValue = 100000; // Max possible value of array elements
    int freq[maxValue + 1]; // Frequency array

    // Initialize frequency array to 0
    for (int i = 0; i <= maxValue; i++) {
        freq[i] = 0;
    }

    // Input array and calculate frequencies
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; // Increment frequency for each value
    }

    // Print unique values
    printf("Unique values:\n");
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            printf("%d ", arr[i]);
        }
    }
