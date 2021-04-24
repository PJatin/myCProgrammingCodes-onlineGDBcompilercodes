#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int prime(int n);
void main(){
        int i,n;
        printf("Enter array size:\t");
        scanf("%d",&n);
        int *a = (int *)malloc(sizeof(int)*n);
        
        printf("Enter array elements:\t");
        for(i=0;i<n;i++){
                scanf("%d",(a+i));
                if(prime(*(a+i))==0)
                printf("%d ",(*(a+i)));
        }printf("\n");
}

int prime(int n){
        int i,count=0;
        if(n==2)
        {
                return 1;
        }
        else 
        {
                for(i=1;i<=n;i++)
                {
                        if(n%i==0)
                        {
                                count++;
                        }
                }
                if(count==2)
                return 1;
                else
                return 0;
        }
}