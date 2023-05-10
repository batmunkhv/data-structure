#include <stdio.h>
#include <stdlib.h>

void heapify(int arr[], int parent, int n){
	int left=parent*2+1;
	int right=parent*2+2;
	int larger_child=left;
	
	if(left>n-1)return;
	if(right<=n-1){
		if(arr[left]<arr[right]) larger_child=right;
	}
	if(arr[parent]<arr[larger_child]){
		int temp=arr[larger_child];
		arr[larger_child]=arr[parent];
		arr[parent]=temp;
		heapify(arr,larger_child,n);
		
	}
}

int main(){
	int arr[]={3,9,2,1,4,5};
	int n=6;
	
	for(int i = n/2-1; i>=0;i--){
		heapify(arr,i,n);
	}
	
	for(int i=n-1;i>=0;i--){
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr,0,i);
	}
	
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
