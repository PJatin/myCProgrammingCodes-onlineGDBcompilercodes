#include <stdio.h>
#include<string.h>
#include<stdlib.h>
/*
Test Case
A

Test Case
ABC
ACB
BAC
BCA
CBA
CAB

Test Case
ABCD
ABDC
ACBD
ACDB
ADCB
ADBC
BACD
BADC
BCAD
BCDA
BDCA
BDAC
CBAD
CBDA
CABD
CADB
CDAB
CDBA
DBCA
DBAC
DCBA
DCAB
DACB
DABC
*/
char swap(char *str, char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *a, int l, int r){
    if(l==r)
    printf("%s\n",a);
    else
    for(int i=l;i<=r;i++)
    {
        swap(a, a+l, a+i);
        permute(a, l+1, r);
        swap(a, a+l, a+i);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char a[20];
        scanf("%s",a);
        printf("Test Case\n");
        permute(a,0,strlen(a)-1);
        printf("\n");
    }
    return 0;
}
