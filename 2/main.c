#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
}*head,*temp,*p;

struct node* createLinkedList(int n);
void printList(struct node*);
struct node* insertFirst(struct node*);
struct node* insertMiddle(struct node*,int);

int n;
int pos;
int main()
{
        printf("Enter number of nodes: ");
        scanf("%d",&n);
        head=createLinkedList(n);
        printList(head);
        head=insertFirst(head);
        printList(head);
        printf("Enter posi: ");
        scanf("%d",&pos);
        insertMiddle(head,pos);
        return 1;
}
struct node* insertMiddle(struct node* head,int n)
{
    printf("\nINSERTING IN THE MIDDLE\n");
    struct node *p=head;
    while(n!=1)
    {
        p=p->next;
        n--;
    }
    struct node *new=(struct node*)malloc(sizeof(struct node));
    
    printf("New Node Data: ");
    scanf("%d",&(new->data));
    
    (new->next)=(p->next);
    p->next=new;
    
    printList(head);
}

struct node* createLinkedList(int n){
        int i;
     for(i=0;i<n;i++)
     {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("Enter data in NODE %d: ",i+1);
            scanf("%d",&(temp->data));
            temp->next=NULL;
            
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
                    }
                    p->next=temp;
            }
     }
     return head;
}

void printList(struct node *head){
        p=head;
        while(p!=NULL)
        {
                printf("%d->",p->data);
                p=p->next;
        }
}

struct node* insertFirst(struct node* head){
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("\nINSERTING NODE AT START\n");
    printf("Enter data: ");
    scanf("%d",&(new->data));
    new->next=head;
    head=new;
    return head;
}


