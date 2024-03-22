#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *createlinkedlist(node* );
node *createnode();
node *insertbegin(node*);
node *insertspecificposition(node*, int);
void display(node*);

int main(){
    node *head=NULL;
    printf("\n CREATING LINKLIST----------\n");
    createlinkedlist(head);

    return 0;
}

node *createnode(){
    node *temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    return temp;
}
node *createlinkedlist(node* head){
    int i,n;
    printf("\n New nodes are inserted at begining.....");
    printf("\n HOW MANY NODES?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        head=insertbegin(head);
    }
    return head;
}
node * insertbegin (node *head){
    node* newnode = createnode();
    if (newnode==NULL){
        printf("\nCAN'T CREATE A NODE FOR FULL MEMORY.\n");
    }
    else
    {
        printf("\nENTER THE DATA TO BE INSERTED AT BEGINING: \n ");
        scanf("%d", &newnode->data);
        newnode->next= head;
        head=newnode;
    }
    display(head);
    return head;
}
void display(node* p){
    printf("\n THE LINKLIST IS -->");
    if (p==NULL){
        printf("\nEMPTY LINKLIST.\n");
    }
    else{
        while(p != NULL){
            if(p->next==NULL){
                printf("[%d] , ",p->data);
            }
            else{
                printf("[%d] -->  ",p->data);
            }
            p=p->next;
        }
    }
    printf("\n\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
