#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*temp,*q,*p,*head;
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
struct node *deleteNth(struct node *head,int nth)
{
    p=head;
    while(p!=NULL)
    {
        if(p->data==nth)
        {
            if(p==head)
            head=p->next;
            else if(p->next==NULL)
            {
                q=head;
                while((q->next)->next!=NULL)
                q=q->next;
                q->next=NULL;
            }
            else
            {
                q=head;
                while((q->next)->data!=nth)
                q=q->next;
                q->next=(q->next)->next;
            }
        }
        p=p->next;
    }
    return head;
}
int main(){
    struct node *one=createLinkedList(one);
    int nth;
    scanf("%d",&nth);
    one=deleteNth(one,nth);
    while(one!=NULL)
    {
        printf("%d ",one->data);
        one=one->next;
    }
}