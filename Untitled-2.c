
// #include<stdio.h>
// int factorial(int n , int result){
//      if(n==0)
//         return result;
//     else{
//         factorial(n-1,n*result);
//     }
// }
// int main()
// {
// int n;
// printf("enter a number: ");
// scanf("%d",&n);
// int y = factorial(n,1);
// printf("factorial of %d is %d",n,y);
// return 0;
// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int factorial(int n){
    // if(n<0){
    //     printf("invalid");
    // }
    if(n==0)
        return 1;
    else{
        return n*factorial(n-1);
    }
}
int main()
{
int n;
printf("enter a number: ");
scanf("%d",&n);
int y = factorial(n);
printf("factorial of %d is %d",n,y);
return 0;
}