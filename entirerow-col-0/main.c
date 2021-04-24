#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int i,j,rows,cols;
    printf("Enter rows & cols:\t");
    scanf("%d %d",&rows,&cols);
    int *A = (int *)malloc(sizeof(int)*rows*cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            (*(A+i*cols+j))=(rand()%5);
            printf("%d ",(*(A+i*cols+j)));
            }printf("\n");
    } 
    printf("\n\n");
    /*  3 1 2 0 3 0 	00 01 02 03 04 05 
        1 2 4 1 2 2 	10 11 12 13 14 15 
        0 4 3 1 0 1 	20 21 22 23 24 25 
        2 1 1 3 2 4 	30 31 32 33 34 35 
        2 0 2 3 2 0 	40 41 42 43 44 45 
        4 2 2 3 4 2 	50 51 52 53 54 55         */
    
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if((*(A+i*cols+j))==0){
                (*(A+i*cols))=0;
                (*(A+j))=0;
                zerow(i,j);
                zeroc(i,j);
            }
        }
    }  
    printf("\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",(*(A+i*cols+j)));
        }printf("\n");
    }
    
    return 0;
}

