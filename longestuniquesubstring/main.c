/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int lengthOfLongestSubstring(char* s) {
    int count=1;
    int max_count=1;
    int j_start=0;
    if(!s[0])
        return 0;
    else if(!s[1])
        return max_count;
    else
    for(int i=1; s[i]; i++)
    {
        for(int j=j_start; j<i; j++)
        {
            if(s[i] != s[j])
                count++;
            else
                j_start = j+1;         
        }
        if(max_count < count)
            max_count = count;
        count = 1;
    }
    return max_count;
}
int main()
{
    char a[100];
    int i,testcases;
    scanf("%d",&testcases);
    for(i=0;i<testcases;i++)
    {
        scanf("%s",a);
        printf("%d",lengthOfLongestSubstring(a));
    }
    return 0;
}
