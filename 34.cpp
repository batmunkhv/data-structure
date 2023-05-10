#include <stdio.h>
#define V 4
int solution[V];
void init(int arr[][V]){
	int i,j;
	for (i=0;i<V;i++){
		for(j=0;j<V;j++){
			arr[i][j]=0;
		}
	}
}

void printMatrix(int arr[][V]){
	int i,j;
	for(int i = 0;i<V;i++){
		printf("%d: ",i);
		
		for(int j=0;j<V;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}

void addEdge(int arr[][V],int source,int dest, int index){
	arr[i][j]=1;
	arr[j][i]=1;
}

int checkSolution(int k){
	for(int i=0;i<V;i++){
	if(solution[i]==k) return 0;
}
return 1;
}


int findPath(int arr[][V],int source,int dest,int index){
	for(int i=0;i<V;i++){
		if(arr[source][i]==1){
			if(checkSolution(i)){
				solution[index]=i;
				if(i==dest) return 1;
				int result=findPath(arr,i,dest,index+1);
				if(result==1) return 1;
			}
		}
	}
	return 0;
}

int main(){
	int matrix[V][V];
	init(matrix);
	addEdge(matrix,0,1);
	addEdge(matrix,0,2);
	addEdge(matrix,1,2);
	addEdge(matrix,0,1);
	printMatrix(matrix);
	
	int source = 1;
	int dest =3;
	for(int i=0;i<V;i++) solution[i] = -1;
	solution[0] = source;
	int result = findPath(matrix,source,dest,1);
	if (result ==1){
		for (int i=0;i<V;i++)
			if(solution[i]!=-1) printf("%d->", solution[i]);		
	}else printf("No Patch!");
	}
	return 0;
}

