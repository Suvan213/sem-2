#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *left;
    int data;
    struct Node *right;
};
struct Node* createNode(int value){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
   temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
}
struct Node* insert(struct Node *root, int value){
    if(root==NULL)
    return createNode(value);
    else if(value<root->data)
    root->left=insert(root->left,value);
    else
    root->right=insert(root->right,value);
    return root;

}
int flag=0;
int search(struct Node *root,int value){
   if(root!=NULL){
    if(root->data==value)
    flag= 1;
    else{
        search(root->left,value);
        search(root->right,value);
    }
   }
   return flag;
}
struct Node* preorder(struct Node *root)
{
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
struct Node* postorder(struct Node *root)
{
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
struct Node* inorder(struct Node *root)
{
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
        
    }
}
struct Node* deleteElement(struct Node *root,int key){
    if(root==NULL)
        return root;
        else if(key < root->data){
            root->left=deleteElement(root->left,key);
            return root;
        } 
        else if(key > root->data){
            root->right=deleteElement(root->right,key);
            return root;
        }
        else{
        //Node with zero or one children
        if(root->left==NULL)
        return root->right;
        else if(root->right=NULL)
        return root->left;
     //Node with two children
    struct Node *temp=root->right;
    while(temp->left != NULL){
        temp=temp->left;
    }
    root->data=temp->data;
    root->right=deleteElement(root->right,temp->data);
    return root;

    }
}
   
int main(){
    struct Node *root=NULL;
    int key;

	while(1){
        int choice;
		printf("\n******* Binary Search Tree *******\n\n");
		printf("1. Insert Node In Binary Search Tree\n");
		printf("2. Pre-order Traversal\n");
		printf("3. In-order Traversal\n");
		printf("4. Post-order Traversal\n");
		printf("5. Search Element In Binary Search Tree \n");
		printf("6.Delete Element In Binary Search Tree\n");
		printf("7. Exit\n\n");
		printf("Enter Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter Key : ");
                scanf("%d",&key);
                root=insert(root,key);
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				printf("Enter Searching Element : ");
                scanf("%d",&key);
                if(search(root,key)==1)
                printf("Found !!!!\n");
                else
                    printf("Not Found !!!!\n");
                    flag=0;
				break;
			case 6:
            printf("Enter Key : ");
                scanf("%d",&key);
				root=deleteElement(root,key);
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Invalid choice !!!!!\n");
		}
		printf("\n");
		system("pause");
	}
	return 0;
}