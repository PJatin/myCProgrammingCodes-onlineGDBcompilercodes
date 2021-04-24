#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*temp,*p,*q;
void printLL(struct node *head){
    p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }printf("\n");
}
struct node *createNode(struct node *head){
    temp=(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    scanf("%d",&(temp->data));
    if(head==NULL)
    head=temp;
    else{
        p=head;
        while(p->next!=NULL)
        p=p->next;
        p->next=temp;
    }return head;
}
struct node *arrange(struct node *A,struct node *B){
    p=A;
    while(p->next!=NULL)
    p=p->next;
    p->next=B;
    p=A;
    int temp;
    while(p->next!=NULL)
    {
        q=p->next;
        while(q!=NULL)
        {
            if((p->data) < (q->data))
            {
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
    return A;
}
int main(){
    int a,b,i;
    struct node *A=NULL,*B=NULL;
    
    scanf("%d",&a);
    for(i=0;i<a;i++)
    A=createNode(A);
    
    scanf("%d",&b);
    for(i=0;i<b;i++)
    B=createNode(B);
   
    printLL(arrange(A,B));
}