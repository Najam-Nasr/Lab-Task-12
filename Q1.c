#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr,n,i,*sum;
	printf("Please enter the number of elements in your array: ");
	scanf("%d",&n);
	ptr = (int *)calloc(n,sizeof(int));
	sum = (int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		printf("Please enter element number %d: ",i+1);
		scanf("%d",&ptr[i]);
		*sum += *(ptr + i);
	}
	printf("the sum of your array is %d",*sum);
	free(ptr);
	free(sum);
}
