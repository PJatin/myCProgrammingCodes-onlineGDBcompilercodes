#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Robot wants to reach a Destination !

int main(){
        int dest,max=0,i,count=0,A[5];
        
        scanf("%d",&dest);       
        
        /*
        First Attempt
        for(i=0;i<5;i++)
        A[i]=i+1;
        
        printf("Steps: ");
        while(dest>0)
        {       
                max=0;
                for(i=0;i<5;i++)
                {
                        if(max<A[i] && A[i]<=dest)
                        {
                                max=A[i];
                        }
                }printf("%d - ",max);
                count++;
                dest=dest-max;
        }
        printf("end\nTotal Steps: %d",count);
        */
        //LATER REALIZATION !!!
        dest=(dest-1)/5;
        printf("%d",dest+1);
        
        return 1;
}