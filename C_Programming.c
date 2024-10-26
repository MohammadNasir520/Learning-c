#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>

int main()
{

    // int n;

    // scanf("%d", &n);

    // int a[n];

    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &a[i]);
    // }

    // int sum = 0;

    // for (int i = 0; i < n; i++) {
    //     sum += a[i];
    // }

    // printf("%d\n", sum);

    //........ input array value and sum..................

    //     int n;

    //     scanf("%d", &n);

    //     int a[n];

    //     for (int i =1 ; i <= n; i++){
    //         scanf("%d", &a[i]);

    // printf("%d ",a[i]);
    //     }

    //     int sum =0;

    //     for (int i=1; i<=n; i++){
    //         scanf("%d",&i);
    //         sum += a[i];

    //     }
    //   printf("%d",sum);

    // ..............min , max output from array............

    // int n;
    // scanf("%d", &n);
    // int a[n];
    // for( int i=1; i<=n; i++){
    //     scanf("%d", &a[i]);
    //     // printf("%d ",a[i]);
    // }

    // int min = INT_MAX , max= INT_MIN;

    // for (int i = 1; i<= n; i++){
    //     if( a[i]< min ){
    //         min= a[i];
    //     }
    //     if( a[i]> max ){
    //         max= a[i];
    //     }
    // }

    // printf("min %d , max %d",min , max);

    // ............another aproachec..............
    // int n;
    // scanf("%d", &n);
    // int a[n];
    // for( int i=0; i<n; i++){
    //     scanf("%d", &a[i]);
    //     // printf("%d ",a[i]);
    // }

    // int min = a[0] , max= a[0];

    // for (int i = 0; i< n; i++){
    //     if( a[i]< min ){
    //         min= a[i];
    //     }
    //     if( a[i]> max ){
    //         max= a[i];
    //     }
    // }

    // printf("min %d , max %d",min , max);

    // solving practice problem.................
    // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
    //     int n;

    //     scanf("%d", &n);
    //     int a[n];

    //    long long int sum = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         scanf("%d", &a[i]);
    //         sum += a[i];
    //     }

    //     if(sum <0){
    //         sum *= -1;
    //     }
    //      printf("%lld", sum);

    // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

    // int n;
    // scanf("%d", &n);

    // int a[n];

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // int x;
    // scanf("%d", &x);

    // int index= -1 ;
    // for (int i = 0; i < n; i++)
    // {

    //     if (x == a[i])
    //     {
    //         index = i;

    //         break;
    //     }
    // }
    // if (index != -1)
    // {
    //     printf("%d", index);
    // }
    // else
    // {
    //     printf("%d", -1);
    // }

    // // solved problem count o, 1 a-2
    //     int n;
    //     scanf("%d", &n);
    //     int a[n];

    //     int count0 = 0;
    //     int count1 = 0;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         scanf("%d", &a[i]);

    //         if (a[i] == 0)
    //         {
    //             count0 += 1;
    //         };
    //         if (a[i] == 1)
    //         {
    //             count1 += 1;
    //         };
    //     };
    //     printf("%d %d", count0, count1);
    // solved problem toggle o, 1 a-2

    // int n;
    // scanf("%d", &n);
    // int a[n];

    // for (int i = 1; i <= n; i++)
    // {
    //     scanf("%d", &a[i]);
    // };

    // int x;
    // scanf("%d", &x);

    // for (int i = 1; i <= n; i++)
    // {

    //     if (a[x] == 0)
    //     {
    //         a[x] = 1;
    //     }

    //     printf("%d ", a[i]);
    // };

    // Solve d difference between max ant each number
    //     int n;
    //     scanf("%d", &n);
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", &a[i]);

    //     }

    //     int min = a[0], max = a[0];
    //     for (int i = 0; i < n; i++)
    //     {

    //         if (a[i] > max)
    //         {
    //             max = a[i];
    //         }
    //         if (a[i] < min)
    //         {
    //             min = a[i];
    //         }

    //     };

    //   for (int i = 0; i < n; i++)
    //     {

    //       printf("%d ", max-a[i]);
    //     }

    // pattern problem

    // 1
    // 12
    // 123
    // 1234
    // 12345
    //  1234
    //   123
    //    12
    //     1

    // int n;
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = i; j >= 1; j--)
    //     {
    //         printf(" ");
    //     }

    //     for (int b = 1; b <= n - i; b++)
    //     {
    //         printf("%d", b);
    //         continue;
    //     }

    //     printf("\n");
    // }

    // vowel and consonat

    // char n;
    // scanf("%c", &n);

    // if(n == 97 || n== 101 || n== 111 || n== 117 || n== 105){
    //     printf("Vowel");
    // }else{
    //     printf("Consonant");
    // }

    // ............learning arrray operation module 9 ..............

    // int a[100000], b[100000];

    // int length1 = 0, length2 = 0;

    // scanf("%d", &length1);

    // for (int i = 0; i < length1; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    // for (int i = 0; i < length1; i++)
    // {

    //     printf("%d ", a[i]);
    // }

    // printf("\n");
    // for (int i = 0; i < length1; i++)
    // {
    //     printf("%d ", b[i]);
    // }

    // length2=length1;
    // printf("\n");
    // printf("after copy b");
    // printf("\n");
    // for (int i = 0; i < length2; i++)
    // {

    //     b[i] = a[i];
    //     printf("%d ", b[i]);
    // }

    // ............. value insertion in array........

    /*

    int a[100000];

    int length = 0;

    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < length; i++)
    {

        printf("%d ", a[i]);
    }

    int index = 0, value = 0;
    scanf("%d %d", &index, &value);

    printf("\n");
    printf("%d %d", index, value);
    printf("\n");

    length++;

    for (int i = length - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    for (int i = 0; i < length; i++)
    {

        printf("%d ", a[i]);
    }
    for (int i = 0; i < length; i++)
    {

        a[index] = value;
        // printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length; i++)
    {

        printf("%d ", a[i]);
    }

    */

    // ..........delete a value from array............

    /*

    int a[100000];

    int length = 0;

    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < length; i++)
    {

        printf("%d ", a[i]);
    }

    int index = 0;
    scanf("%d", &index);

    printf("\n");
    printf("%d", index);
    printf("\n");

    for (int i = index; i < length; i++)
    {
        a[i] = a[i + 1];
    }
    length--;
    for (int i = 0; i < length; i++)
    {
        printf("%d",a[i]);
    }

    */

    //  reverse an array by single array with temp value;
    /*
        int a[100000];

        int length = 0;

        scanf("%d", &length);

        for (int i = 0; i < length; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0, j = length - 1; i <= j; i++, j--)
        {

            int temp = a[i];
            a[i] = a[j];

            a[j] = temp;
        }

        for (int i = 0; i < length; i++)
        {
            printf("%d ", a[i]);
        }
    */

    //    take input of array

    // char str[20];

    // scanf("%s", str);

    // printf("%s", str);

    // fgets(str, sizeof(str), stdin);
    // fputs(str, stdout);

    // length of string by strlen function

    /*
    char str[5] = "abcd";

    int length = strlen(str);
    printf("%d", length);
    */

    //    ............copying an string from another string........


/* 
    char str1[20] = "abcd", str2[20];

    fgets(str1, sizeof(str1), stdin);
    int lengthStr1 = strlen(str1);
    // fputs(str1, stdout);

    for (int i = 0; i < lengthStr1; i++)

    {
        str2[i] = str1[i];
    }

    // use sing quation
    str2[lengthStr1] = '\0';
    printf("%s %s", str1, str2);


    */
    return 0;
}