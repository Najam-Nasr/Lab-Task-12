#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n,i;
	printf("Please enter total number of characters in you name: ");
	scanf("%d",&n);
	getchar();
	printf("Please enter your full name: ");
	char arr[n];
	fgets(arr,n,stdin);
	char *new;
	new = (char *)calloc(n , sizeof(char));
    strcpy(new, arr);
	printf("Dynamic array: %s",new);
	free(new);

}
