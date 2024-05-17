#include<stdio.h>  
#include<stdlib.h>  

typedef struct Node{
	int key;
	struct Node* left;
	struct Node* right;
}node;

node* newnode(int item){
	node* temp=(node*)malloc(sizeof(node));
	temp->key=item;
	temp->left=temp->right=NULL;
	return temp;
}
node* insertNode(node* root , int value){
	if(root==NULL){
		return newnode(value);
	}
	if(value<root->key){
		root->left=insertNode(root->left,value);
	}
	else if(value>root->key){
		root->right=insertNode(root->right,value);
	}
	return root;
}
void inordertravelsal(node* root){
	if(root != NULL){
		inordertravelsal(root->left);
		printf("%d ",root->key);
		inordertravelsal(root->right);
	}
}

void postordertraversal(node* root){
	if(root!= NULL){
		postordertraversal(root->left);
		postordertraversal(root->right);
		printf("%d ",root->key);
	}
}

int main() 
{  
    node* root=NULL;
    int number,value;
    printf("\nHow many nodes do you want to insert?");
    scanf("%d",&number);
    for(int i=0; i<number;i++){
    	printf("\nHow many value do you want to insert?");
    	scanf("%d",&value);
    	root=insertNode(root,value);
	}
	printf("\nInorder Travarsal of the BST:: ");
	inordertravelsal(root);
    printf("\n");
    return 0;
}  

