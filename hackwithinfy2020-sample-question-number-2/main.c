#include<stdio.h>
int main(){
    int num,i,j,sum,test;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d",&num);
        sum=0;
        for(j=1;j<num;j++)
        {
            if(num%j==0)
            sum+=j;
        }
        if(sum==num)
        printf("YES\n");
        else
        printf("NO\n");
    }
}