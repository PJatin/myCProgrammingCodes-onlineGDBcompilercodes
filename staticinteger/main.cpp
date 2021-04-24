#include <stdio.h>
int foo();
int main()
{
        int i,x;
        for(i=0;i<5;i++)
        {
                x=foo();
                printf("%d ",x);
        }
    return 0;
}
int foo(){
        static int i = 0;
        i=i+1;
        return i;
}
