#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left_child;
	struct node *right_child;
};

struct node* buildTree(int arr[], int low, int high)
{
	if(low>high) return NULL;
	if(low==high){
		struct node*            ;
		return sub_root;
	}
	struct node* sub_root=createNode(arr[low]);
	int middle=(low+high)/2;
	sub-root->left_child=               ;
	sub-root->right_child=              ;
	return sub_root;
}

int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	
	struct node* root = buildTree(arr,0,9);
	return 0;
}
