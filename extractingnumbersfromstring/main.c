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
    int flag=1;
    for(i=0;i<=k;i++)
    {
        flag=1;
        for(j=0;j<strlen(b[i]);j++)
        {
            if(b[i][j]>='0' && b[i][j]<='9')
            {
                flag=flag*2;
                if(b[i][j]=='9')
                {
                    flag=flag*0;
                }
            }
        }
        if(flag>1)
        {
            printf("%s",b[i]);
        }
    }
    return 0;
}