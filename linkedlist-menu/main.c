#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head,*temp,*p;

void printList(){
    p=head;
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\tLINKED LIST ELEMENTS: ");
    while(p!=NULL)
    {
        printf("%d --> ",p->data);
        p=p->next;
    }printf("NULL\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void create_node(){
    
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\tNewNodeData: ");
    scanf("%d",&(temp->data));
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }printList();
}

void insertFirst(){
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\tFirstNodeData: ");
    scanf("%d",&(temp->data));
    temp->next=head;
    head=temp;
    printList();
}

void manipulateData(){
        int search;
        printf("\n\tMANIPULATION of DATA ( Initiated ) ... \n\t------------ -- ---- - --------- -\n");
        printf("\tEnter node data to be manipulated: ");
        scanf("%d",&search);
        printf("\tsearching...\n");
        p=head;
        while(p->data!=search)
        {
                p=p->next;
        }
        printf("\tORIGINAL STRING: ");
        printf("\tOK ! %d to be replaced with __ : ",p->data);
        scanf("%d",&(p->data));
        printf("\n\tModified Linked List: ");
        printList();
}

void insertingNode_at_NthPosition()
{
        int i=2,pos;
        p=head;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("\n\tEnter node number: ");
        scanf("%d",&pos);
        while(i<pos)
        {
                p=p->next;
                i++;
        }
        printf("\n\tEnter new node data: ");
        scanf("%d",&(temp->data));
        temp->next=p->next;
        p->next=temp;
        printList();
}

void deleteDuplicates()
{
        printf("\tDeletes only no-decreasing ordered elements !");
        p=head;
        while(p->next!=NULL)
        {
                if((p->data)==((p->next)->data))
                (p->next)=((p->next)->next);
                else
                p=p->next;
        }
        printList();
}

int main(){
    int j=1,i;
    char ch='o';
    while(j!=0)
    {
        printf("\t_____________________________________________________________________________________________________________________________\n\tLINKED LIST\n\t_____________________________________________________________________________________________________________________________\n\t    Menu\n\t   ******\n\t1.Append Node\n\t2.Insert Node at First\n\t3.Manipulate Data\n\t4.Inserting new node at Nth position\n\t5.DeleteDuplicates\n");
        printf("\tEnter your choice: ");
        scanf("%d",&i);
        printf("\n");
        switch (i)
        {
            case 1:printf("\tCreatingNewNode\n\t----------------\n");
                    create_node();break;
            case 2:printf("\tInsertingFirstNode\n\t------------------\n");
                    insertFirst();break;
            case 3:printf("\tManipulateData\n\t--------------\n");
                    manipulateData();break;
            case 4:printf("\tInsertingNode_at_NthPosition\n\t----------------------------\n");
                    insertingNode_at_NthPosition();break;
            case 5:printf("\tDeleteDuplicates\n\t----------------\n");
                    deleteDuplicates();break;
            default:printf("\tINVALID\n\t-------\n");
                    break;
        }
        printf("\tWant to CONTINUE / EXIT { 1 / 0 }: ");
        scanf("%d",&j);
    }
    return 1;    
}

