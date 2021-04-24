#include<stdio.h>
#include<string.h>
int main(){
    int test,i,j,k,count=0,flag=0;
    char a[50],b[50];
    scanf("%d",&test);
    while(test!=0)
    {
        scanf("%s %s",a,b);
        int lena=strlen(a);
        int lenb=strlen(b);
        for(i=0;i<=(lena-lenb);i++)
        {
            flag=0;
            count=0;
            for(j=0;j<lenb;j++)
            {
                //printf("a=%c  ",a[i+j]);
                //printf("b=%c  coumt=%d",b[j],count);
                //printf("\n");
                if(a[i+j]==b[j] || a[i+j]-32==b[j])
                count++;
            }//printf("\n");
            if(count==strlen(b))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        printf("YES\n");
        else
        printf("NO\n");
        test--;
    }
    return 0;
}