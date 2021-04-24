#include<stdio.h>
#include<string.h>
/*
INPUT 1:
9 8 34
4 5 43
*/
struct td{
        int h,m,s;
}b,e,d;
void main(){
        
        printf("Start time & Stop time\n");
        scanf("%d %d %d %d %d %d",&b.h,&b.m,&b.s,&e.h,&e.m,&e.s);
        
        printf("StartTime:\t%d:%d:%d\nStopTime:\t%d:%d:%d\nTimeDifference:\t",b.h,b.m,b.s,e.h,e.m,e.s);

        int diff = ((b.h * 3600)+(b.m * 60)+(b.s))-((e.h * 3600)+(e.m * 60)+(e.s));
        if(diff<0)
        diff = ((e.h * 3600)+(e.m * 60)+(e.s))-((b.h * 3600)+(b.m * 60)+(b.s));
        
        d.s=diff%60;
        diff/=60;
        d.m=diff%60;
        diff/=60;
        d.h=diff%60;
        
        printf("%dhrs %dmins %dsecs\n",d.h,d.m,d.s);
}