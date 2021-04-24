#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0,n;
    char a[50];
    scanf("%d",&n);
    while(j<n)
    {
        scanf("%s",a);
        switch(j%3)
        {
            case 0:for(i=0;a[i]!=0;i++)
                    {
                        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' )
                        printf("%c",a[i]);
                        else
                        printf("*");
                    }printf("\n");
                    break;
            case 1:for(i=0;a[i]!=0;i++)
                    {
                        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' )
                        printf("#");
                        else
                        printf("%c",a[i]);
                    }printf("\n");
                    break;
            case 2:for(i=0;i<strlen(a);i++)
                    {
                        if(a[i]>='a' && a[i]<='z')
                        printf("%c",a[i]-32);
                        else
                        printf("%c",a[i]);
                    }printf("\n");
                    break;
        }j++;
    }return 1;
}