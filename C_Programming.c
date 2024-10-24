#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

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
    // return 0;
}