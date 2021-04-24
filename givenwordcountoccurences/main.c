#include<string.h>
#include<stdio.h>

int main(){
    
    int flag=1;
    int i;
    int j;
    int count=0;
    
    char a[50]="My name is Jatin . What's ur name ?";
    char b[20];
    
    printf("Word to be searched\n");
    scanf("%s",b);
    
    for(i=0;i<(strlen(a)-strlen(b));i++)
    {
        flag=1;
        for(j=0;j<strlen(b);j++)
        {
            if(a[i+j]!=b[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            count++;
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}