#include<stdio.h>

int main(){
    
    int i,j=0;
    int a[20];
    
    a[0]=0;
    a[1]=1;
    
    for(i=1;i<15;i++)
    {
        a[i+1]=a[i]+a[i-1];
        //printf("%d\t",a[i-1]);
        j++;
    }
    int k=j;
    while(j>0)
    {
        printf("%d ",a[j-1]);
        j--;
    }
    
    printf("\n");
    while(k>=0){
        if(a[k-1]%2!=0)
        printf("%d ",a[k-1]);
        k--;
        
    }
}
