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
    
    int max=0,flag=1,index=0;
    for(i=0;i<=k;i++)
    {
        flag=1;
        for(j=0;j<strlen(b[i]);j++)
        {
            //printf("%c %c\n",b[i][j],b[i][strlen(b[i])-j-1]);
            if(b[i][j]!=b[i][strlen(b[i])-j-1])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            if(max<strlen(b[i]))
            {
                max=strlen(b[i]);
                index=i;
            }
        }
    }
    printf("%s",b[index]);
    return 0;
}
