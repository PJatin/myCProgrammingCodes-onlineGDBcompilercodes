#include<stdio.h>
#include<string.h>

void main(){
    char a[20],b[20];
    int index,i;
    printf("2's COMPLEMENT OF A BINARY NUMBER\n--------------------------------------\nEnter the Binary:\t");
    scanf("%s",a);
    strcpy(b,a);
    for(i=strlen(a);i>=0;i--)
    {
        if(a[i]=='1')
        {
            index=i;
            for(i=0;i<index;i++)
            if(a[i]=='0')
            a[i]='1';
            else
            a[i]='0';
            printf("2's Complement(%s)=\t%s\n",b,a);
            break;
        }
    }
}