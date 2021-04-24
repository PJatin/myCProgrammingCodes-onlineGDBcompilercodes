/*
4 1 5
6 9 11 4 5
*/
#include <stdio.h>
int main()
{
    int wall,jump=0,n,x,y,i;
    scanf("%d %d %d",&x,&y,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&wall);
        jump+=((wall/(x-y))+1);
        if((wall%(x-y))==0 || ((wall%(x))==0))
        jump--;
    }
    printf("%d",jump);
   return 0;
}
