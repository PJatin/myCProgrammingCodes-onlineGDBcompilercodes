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
    for(i=0;i<=k;i++)
    {
        for(j=0;j<strlen(b[i]);j++)
        {
            printf("%c",b[i][strlen(b[i])-j-1]);
        }printf(" ");
    }
    return 0;
}
