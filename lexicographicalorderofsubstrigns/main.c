#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[20][10];
    int i,j=0,k=0,n;
    scanf("%[^\n]%*c",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            b[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            b[k][j]=a[i];
            j++;
        }
    }b[k][j]='\0';
    char temp[50];
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            if(strcmp(b[i],b[j])>0)
            {
                strcpy(temp,b[i]);
                strcpy(b[i],b[j]);
                strcpy(b[j],temp);
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%s\n",b[i]);
    }
    return 0;
}