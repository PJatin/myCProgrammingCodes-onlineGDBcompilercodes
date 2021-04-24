#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*temp,*head,*p,*even,*odd;

void printList(struct node *head)
{
    p=head;
    while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }printf("NULL.\n");
}

struct node *createNode(struct node *head,int dat)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=dat;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        p=head;
        if(head==even)
        {
            temp->next=head;
            head=temp;
        }
        else
        {
            while(p->next!=NULL)
            {
                p=p->next;
            }p->next=temp;
        }
    }
    return head;
}

int main(){
    int n,flag=0,dat;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dat);
        if(dat%2==0)
        {
            flag=1;
            even=createNode(even,dat);
        }
        else
        {
            if(flag==1)
            {
                p=odd;
                while(p->next!=NULL)
                p=p->next;
                p->next=even;
            }
            odd=createNode(odd,dat);
            flag=0;
        }
    }
    
    printList(odd);
    
    return 0;
}

