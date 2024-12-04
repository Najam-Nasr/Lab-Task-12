#include<stdio.h>
#include<stdlib.h>
void printarray(int *arr, int n){
	int i,largest=0;
	for(i=0;i<n;i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
		printf("%d ",*(arr + i));
	}
	printf("\nlargest: %d\n",largest);
}

int main(){
	int *arr,i,n,new_size;
	printf("Please enter the size of your array: ");
	scanf("%d",&n);
	arr = (int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		printf("Please enter element number %d: ",i+1);
		scanf("%d", (arr + i));
	}
	printf("\ncurrent array: \n");
	printarray(arr,n);
	printf("please enter the new size of the array: ");
	scanf("%d",&new_size);
	arr = realloc(arr, new_size*sizeof(int));
	for(i=n;i<new_size;i++){
		printf("Please enter new element number %d: ",i+1);
		scanf("%d", (arr + i));
	}
	printarray(arr,new_size);

	free(arr);

	
}
