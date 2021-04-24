#include<stdio.h>
#include<string.h>
int main(){
    char a[100],str[100];
    int k,i,j;
    
    scanf("%[^\n]%*c",a);
    
    strcpy(str,a);
    
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("%s\n",str);
    int count=0;
    for(i=0;i<strlen(str);i++)
    {
        count=0;
        printf("No. of %c's: ",str[i]);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]==str[i])
            {
                count++;
            }
        }printf("%d\n",count);
    }
    return 0;
}
