#include<stdio.h>

int mul(int b);

int main(){
    int sum=1;
    int a,b,i=0;
    
    printf("PRINTING SUM OF 1+x+x^2+x^3+x^4+x^5+x^6.....+x^n\n------------------------------------------\n");
    printf("Enter positive x & n:\t");
    
    scan:scanf("%d %d",&b,&a);
    
    if(a<0)
    goto scan;
    
    for(i=1;i<=a;i++)
    {
        sum+=mul(b);
    }printf("Total sum = %d\n",sum);
    return 0;
}

int mul(int b){
    static int mult=1;
    mult*=b;
    return mult;
}
