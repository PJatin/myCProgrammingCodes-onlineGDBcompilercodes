//max sum of contigious nodes
#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
}*head,*temp,*p,*q,*i,*j,*k,*last;
void printLL(struct node *head){
        p=head;
        while(p!=NULL){
                printf("%d ",p->data);
                p=p->next;
        }printf("\n");
}
struct node *createLL(struct node *head){
        int n;
        scanf("%d",&n);
        while(n!=0)
        {
                temp=(struct node *)malloc(sizeof(struct node));
                scanf("%d",&(temp->data));
                temp->next=NULL;
                if(head==NULL)
                head=temp;
                else{
                        p=head;
                        while(p->next!=NULL)
                        p=p->next;
                        p->next=temp;
                }
                n--;
        }return head;
}
void MaxSumContigiousNodes(struct node *head){
        int sum,max=0;
        i=head;
        while((i->next)!=NULL){
                sum=0;
                k=i->next;
                while(k!=NULL){
                        j=i;
                        sum=0;
                        while(j!=k->next){
                                sum+=(j->data);
                                j=j->next;
                                }
                                if(sum>max)
                                max=sum;
                                k=k->next;
                }
                i=i->next;
        }printf("%d\n",max);
}
void usingLL(){
        int t;
        scanf("%d",&t);
        while(t!=0){
                head=createLL(head);
                MaxSumContigiousNodes(head);
                head=NULL;
                t--;
        }
        
}
/*void usingArray(){
        int t,i,j,k,sum,max=0,n;
        scanf("%d",&t);
        while(t!=0){
                scanf("%d",&n);
                int *a = (int *)malloc(sizeof(int)*n);
                for(i=0;i<n;i++)
                scanf("%d",&a[i]);
                for(i=0;i<n-1;i++){
                        sum=0;
                        for(k=2;k<n-i+1;k++){
                                sum=0;
                                for(j=0;j<k;j++){
                                        sum+=a[i+j];
                                }
                                if(sum>max)
                                max=sum;
                        }
                }printf("%d\n",max);
                t--;
        }
}*/
int main(){
        //usingArray();
        usingLL();
        return 0;
}