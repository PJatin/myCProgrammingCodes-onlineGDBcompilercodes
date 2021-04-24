#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*temp,*p,*head;
struct node *createLinkedList(struct node *head){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&(temp->data));
        temp->next=NULL;
        if(head==NULL)
        head=temp;
        else
        {
            p=head;
            while(p->next!=NULL)
            p=p->next;
            p->next=temp;
        }
    }
    return head;
}
void GetNth(struct node *head,int nth)
{
    p=head;
    for(int i=1;i<nth;i++)
    {
        p=p->next;
    }printf("%d",p->data);
}
int main(){
    struct node *one=createLinkedList(one);
    int nth;
    scanf("%d",&nth);
    GetNth(one,nth);
}