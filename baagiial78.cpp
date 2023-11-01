#include <stdio.h>

void knapsack(int W, int wt[], int val[],int total_weight,int total_value, int k, int n){
	if(total_weight>W) return;
	if(k==n){
			printf("%d %d",total_weight,total_value);
			printf("\n");
			return;
	}
	
	knapsack(W,wt,val,total_weight,total_value,k+1,n);
	total_weight+=wt[k];
	total_value+=val[k];
	
	knapsack(W,wt,val,total_weight,total_value,k+1,n);
	total_weight-=wt[k];
	total_value-=val[k];
	
}

int main(){
	int wt[]={10,20,30};
	int val[] = {60,100,120};
	int W = 50;
	
	knapsack(W,wt,val,0,0,0,3);
}
