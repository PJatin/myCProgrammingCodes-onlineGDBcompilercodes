#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int patternOne();
void patternTwo();
void patternThree();
void patternFour();
void seriesOne();
void primeSeries();
void prime_primeXindexSeries();//2,4,3,12,5,30,7,56,11,110

int factorial(int i);//returns (i)!
int prime(int ntp);//returns Nth prime number.

int main(){
    //patternOne();
    //patternTwo();
    //patternThree();
    //patternFour();
    //seriesOne();
    //primeSeries();
    prime_primeXindexSeries();
}
void prime_primeXindexSeries(){
    printf("PRIME, (PRIME x INDEX) SERIES\n-----------------------\nEnter number of terms:\t"); 
    
    int count,i,j=0,m;
    scanf("%d",&count);
        
    for(i=1;i<=count;i++)
    {
       j++;
       m=prime(j);
       printf("%d ",m);
       i++;
       if(i<=count)
       printf("%d ",(m*i));
    }
}

void primeSeries(){
    int count,i,nt,n=2;
    printf("PRIME SERIES\n----------\nEnter number of terms:\t");
        scanf("%d",&nt);
        
        while(nt>0)
        {
                count = 0;
                
                for(i=1;i<=n;i++)
                {
                        if(n%i==0)
                        {
                                count++;
                        }
                }
                
                if(count==2)
                {
                        nt=nt-1;
                        printf("%d ",n);
                }
                n++;
        }
}

void seriesOne(){
    int n,i=0,count=0,flag=0;
    printf(" SERIES\n");
    scanf("%d",&n);
    while(i!=n){
        printf("%d,",i*i);
        count++;
        if(count==n){
            break;
        }
        printf("%d,",i*i*i);
        count++;
        if(count==n){
            break;
        }
        printf("%d,",factorial(i));
        count++;
        if(count==n){
            break;
        }
        i++;
    }
    
}
void patternFour(){
        int i,j,k=25,n=5;
        int A[5][5];
        printf("SPIRAL + SNAKE MATRIX \n");
        for(i=n-1;i>=0;i--)
        {
                for(j=n-1;j>=0;j--)
                {
                        k-=1;
                        A[i][j]=k;
                        printf("%d%d ",i,j);
                }printf("\n");
        }
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        printf("%d\t",A[i][j]);
                }printf("\n");
        }
}
void patternThree(){
    printf("SNAKE PATTERN\n");
    int i,j,k=0;
    int n=5;
    int A[5][5];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(i%2!=0){
                        A[i][j]=A[i-1][n-1]+n-j;
                        printf("%d\t",A[i][j]);
                        k+=1;
                }
                else{
                        k+=1;
                        A[i][j]=k;
                        printf("%d\t",A[i][j]);
                }
        }printf("\n");
    }
}
void patternTwo(){
        
        int n,i,j;
        printf("PYRAMID OF STARS");
        
        printf("Enter an integer: ");
        scanf("%d",&n);
        printf("\n");
        n++;
        char a[2] = " *";
        
        for(i=0;i<n-1;i++){
                
                j=n-2-i;
                
                while(j!=0)
                {
                        printf(" ");
                        j--;
                }
                
                for(j=i+1;j>0;j--)
                printf("%s",a);
                
                printf("\n");
        }
        
}
int patternOne(){
    int n,i,j,k;
    printf("UPPER TRIANGLE(CONSECUTIVE NUMBERS) & LOWER TRIANGLE(STARS) ");
    printf("Enter an Integer: ");
    scanf("%d",&n);
    int A[15][15];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            {
                A[i][j]=i+1;
                printf("%d\t",i+1);
            }
            else
            {
                A[i][j]=A[i][j-1]+n-j;
                printf("%d\t",A[i][j-1]+n-j);
            }
        }
        for( ; j<n;j++)
        printf("*\t");
        printf("\n");
    }
}
int factorial(int n){
        int fact=1,i;
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }return fact;
    }
int prime(int ntp){
        int count,i,nt,n=2;
        
        while(ntp>0)
        {
                count = 0;
                
                for(i=1;i<=n;i++)
                        if(n%i==0)
                                count++;
                
                if(count==2)
                {
                        if(ntp==1)
                        return n;
                        ntp=ntp-1;
                }
                n++;
        }
}

