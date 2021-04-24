/*
Sample Input 0
3
7 24 25
5 12 13
3 4 5
Sample Output 0
3 4 5
5 12 13
7 24 25
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
    
	int i,A[20],B[20],n,a,b,c,k=1,j,temp;
        for(i=0;i<n;i++)
        {
                scanf("%d %d %d",&a,&b,&c);
                A[i]=heron(a,b,c);
                B[i]=A[i];
        }
        printf("A[%d]= ",n);
        for(i=0;i<n;i++)
        {
                printf("%d ",A[i]);
        }printf("\n");
        for(i=0;i<n-1;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(A[i]>A[j])
                        {
                                temp=A[i];
                                A[i]=A[j];
                                A[j]=temp;
                        }
                }
        }
        printf("SORTED ARRAY:\t");
        for(i=0;i<n;i++)
        printf("%d ",A[i]);
        printf("\nOrigianal Array\t");
        for(i=0;i<n;i++)
        printf("%d ",B[i]);
        printf("\nINDEX: ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(A[i]==B[j])
                {
                    printf("%d ",j);
                }
            }
        }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
