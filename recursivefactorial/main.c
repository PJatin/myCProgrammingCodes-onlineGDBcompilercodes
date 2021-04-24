#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    scanf("%d",&n);
    n=factorial(n);
    printf("%d",n);
    return 0;
}
int factorial(int n)
{
    if(n==1)
    return 1;
    else
    return n*factorial(n-1);
}


