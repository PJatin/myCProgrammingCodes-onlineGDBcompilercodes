#include<stdio.h>
#include<stdlib.h>
int MAXSIZE=8;
char s[8];
int top=0;
char data;
int isEmpty(){
    if(top==0)
    return 1;
    else
    return 0;
}
int isFull(){
    if(top==MAXSIZE)
    return 1;
    else
    return 0;
}
void push(char data){
   if(isFull())
   {
       printf("s is FUll\n");
        //exit 0;
   }
   else
   {
       top+=1;
        s[top]=data;
       printf("PUSH->\t%d PUSHED   (TOP: %d)\n",data,top);
   }
}
char pop(){
    if(isEmpty())
    {
        printf("s is empty bro");
        //exit 0;
    }
    else
    {
        data=s[top];
        top-=1;
        printf("POP->\tTOP: %d\n",top);
        return data;
    }
}
int main(){
    for(getchar()!='\n')
    {
        push(getchar());
    }
    data=pop();
    printf("PRINTING s\n-------- -----\ns[%d]: %c ",top+1,data);
    return 1;
}