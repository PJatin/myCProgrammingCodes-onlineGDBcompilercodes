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
    temp->next=NULL;
    temp->data=dat;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }p->next=temp;
    }
    return head;
}

struct node *concatLL(struct node *L1,struct node *L2)
{
    p=L1;
    while(p->next!=NULL)
    p=p->next;
    p->next=L2;
    return L1;
}

int main(){
    int n,dat;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dat);
        (dat%2==0)?(even=createNode(even,dat)):(odd=createNode(odd,dat));
    }
    
    if(even==NULL)
    printList(odd);
    else{
        even=concatLL(even,odd);
        printList(even);
    }
    
    
    return 0;
}

