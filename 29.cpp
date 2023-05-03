#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left_child;
	struct node *right_child;
};
struct node* createNode(int data)
{
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->left_child = NULL;
	newNode->right_child = NULL;
	return newNode;
}

void insertLeft(struct node* parent, int data) {
	parent->left_child=createNode(data);
}

void insertRight(struct node* parent, int data) {
	parent->right_child=createNode(data);
}

void inorderTraversal(struct node* parent) {
	if (parent == NULL) return;
		inorderTraversal(parent->left_child);
		printf("%d ->", parent->data);
		inorderTraversal(parent->right_child);
}

void preorderTraversal(struct node* parent) {
	if (parent == NULL) return;
		printf("%d ->", parent->data);
		preorderTraversal(parent->left_child);
		preorderTraversal(parent->right_child);
}

void postorderTraversal(struct node* parent) {
	if (parent == NULL) return;
		postorderTraversal(parent->left_child);
		postorderTraversal(parent->right_child);
		printf("%d ->", parent->data);
}

int main(){
	struct node* root = createNode(1);
	insertLeft(root, 2);
	insertRight(root, 3);
	insertLeft(root->left_child, 4);
	insertRight(root->left_child,5);

	printf("Inorder traversal n");
	inorderTraversal(root);

	printf("\nPreorder traversal n");
	preorderTraversal(root);

	printf("\nPostorder traversal n");
	postorderTraversal(root);
	return 0;
}






