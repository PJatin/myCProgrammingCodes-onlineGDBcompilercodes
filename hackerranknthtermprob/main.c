/*
Sample Input 0
5
1 2 3
Sample Output 0
11
*/
#include <stdio.h>

int main()
{
    int n,a=1,b=2,c=3,i,sum=0;
    printf("n=");
    scanf("%d",&n);
    if(n>4){
        for(i=4;i<=n;i++)
        {
                sum=0;
                sum+=(a+b+c);
                a=b;
                b=c;
                c=sum;
        }printf("%dth term=%d\n",n,sum);
    }
    else if(n==1)
    {
        printf("1st term=%d\n",a);    
    }
    else if(n==2)
    {
        printf("2nd term=%d\n",b);    
    }
    else if(n==3)
    {
            printf("3rd term=%d\n",c);
    }
    else
    {
            printf("INVALID\n");
    }
    return 0;
}
