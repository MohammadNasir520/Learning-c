#include <stdio.h>
#include <stdbool.h>
#include<limits.h>

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

int n;
scanf("%d", &n);
int a[n];
for( int i=1; i<=n; i++){
    scanf("%d", &a[i]);
    // printf("%d ",a[i]);
}

int min = INT_MAX , max= INT_MIN;

for (int i = 1; i<= n; i++){
    if( a[i]< min ){
        min= a[i];
    }
    if( a[i]> max ){
        max= a[i];
    }
}

printf("min %d , max %d",min , max);


    return 0;
}