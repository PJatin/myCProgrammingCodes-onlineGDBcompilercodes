#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;
}*temp,*head,*p,*q;
void printList(){
    p=head;
    while(p!=NULL)
    {
        printf("%c->",p->data);
        p=p->next;
    }printf("NULL.\n");
}
void createNode(char *ch){
    temp=(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=(*ch);
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
}
void deleteSpecial()
{
    p=head;
    while(p!=NULL)
    {
        char ch=p->data;
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'));
        else
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
                while((q->next)->data!=ch)
                q=q->next;
                q->next=q->next->next;
            }
        }
        p=p->next;
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    char ch;
    for(int i=0;i<n;i++)
    {
        scanf("%c ",&ch);
        createNode(&ch);
    }
    printList();
    deleteSpecial();
    printList();
    return 0;
}