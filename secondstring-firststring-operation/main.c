#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[20][20];
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
    
    char c[100],d[20][20];
    int k2=0;
    j=0;
    scanf("%[^\n]%*c",c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' ')
        {
            d[k2][j]='\0';
            k2++;
            j=0;
        }
        else
        {
            d[k2][j]=c[i];
            j++;
        }
    }d[k][j]='\0';
    
    int flag=0;
    for(i=0;i<=k2;i++)
    {
        flag=0;
        for(j=0;j<=k;j++)
        {
            if(strcmp(d[i],b[j])==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%s ",d[i]);
    }
    return 0;
}