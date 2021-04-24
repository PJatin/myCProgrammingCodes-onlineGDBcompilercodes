#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int factorial(int );
int strong(int );

void main(){
        int n;
        printf("STRONG NUMBER PROGRAM\n____________________\nEnter the number: ");
        scanf("%d",&n);
        if(n==strong(n))
        printf("Strong\n");
        else
        printf("Not Strong");
}

int strong(int n){
        int sum=0;
        while(n!=0){
        sum+=factorial(n%10);
        n/=10;
        }
        return sum;
}

int factorial(int a){
        if (a==0)
        return 1;
        else
        {
            a=a*factorial(a-1);
            return a;
        }
}
