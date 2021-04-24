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

int main(){
    int n,dat;
    scanf("%d",&n);
    printf("Original Linked List\t:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dat);
        even=createNode(even,dat);
    }
    printList(even);
    int key;
    scanf("%d",&key);
    printf("Deletion Element\t:%d\nModifiedLinkedList\t:",key);
    while(even!=NULL)
    {
        if((even->data)!=key)
        {
            odd=createNode(odd,(even->data));
        }
        even=even->next;
    }
    
    printList(odd);
    
    return 0;
}

