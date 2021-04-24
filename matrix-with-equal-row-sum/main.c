/*
Test Case 
1 --->1


Test Case 
1 4 --->5
2 3 --->5


Test Case 
1 5 9 --->15
2 6 7 --->15
3 4 8 --->15


Test Case 
1 6 11 16 --->34
2 7 12 13 --->34
3 8 9 14 --->34
4 5 10 15 --->34


Test Case 
1 7 13 19 25 --->65
2 8 14 20 21 --->65
3 9 15 16 22 --->65
4 10 11 17 23 --->65
5 6 12 18 24 --->65
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int testCases;
    scanf("%d",&testCases);
    while(testCases!=0){
        
        printf("\n\nTest Case \n");
        
        int n,i,j,k,c=1;
        scanf("%d",&n);
        
        int **a = (int **)malloc(sizeof(int *)*n);
        for(i=0;i<n;i++)
        {
            a[i] = (int *)malloc(sizeof(int)*n);
            for(j=0;j<n;j++)
            a[i][j]=c++;
        }
        
        int **b = (int **)malloc(sizeof(int *)*n);
        for(i=0;i<n;i++)
        {
            b[i] = (int *)malloc(sizeof(int)*n);
            for(j=0;j<n;j++)
            b[i][j] = a[j][(i+j)%n];
        }
        
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<n;j++)
            {
                sum+=b[i][j];
                printf("%d ",b[i][j]);
            }printf("--->%d\n",sum);
        }
        testCases--;
    }
    return 0;
}