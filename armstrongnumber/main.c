//Armstrong number is a number that is equal to the sum of cubes of its digits.
#include <stdio.h>
int isArmstrong(int n)
{
    int sum=0,a,b=n;
    while(n!=0)
    {
        a=n%10;
        sum+=(a*a*a);
        n/=10;
    }
    if(sum==b)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isArmstrong(n)==1)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }
    return 0;
}
