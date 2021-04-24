/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        printf("Test Case\n");
        char a[200],b[200];
        int i,k=0,flag=0;
        gets(a);
        for(i=0;a[i]!='\0';i++)
        {
            k=0;flag=0;
            while((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
            {
                b[k] = a[i];
                k++;
                i++;
                flag = 1;
            }
            if(flag == 1)
            {
                b[k] = '\0';
                printf("%s\n",b);
            }
        }
        printf("\n");
    }
    return 0;
}
