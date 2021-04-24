#include <stdio.h>
#include<stdlib.h>
#include<math.h>
/*
3
7 24 25
5 12 13
3 4 5
*/
int area(int,int,int);
int main()
{
        int i,n,a,b,c;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d %d %d",&a,&b,&c);
                printf("%d\n",area(a,b,c));
        }
        
    return 0;
}
int area(int a,int b,int c)
{
        int p=(a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
}

