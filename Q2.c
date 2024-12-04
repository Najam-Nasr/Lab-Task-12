#include<stdio.h>
#include<stdlib.h>
void swap(int *aptr, int *bptr, int *cptr){
	int temp;
	temp = *aptr;
	*aptr = *bptr;
	*bptr = *cptr;
	*cptr = temp;
}
int main(){
	int a,b,c;;
	printf("Please enter value of pointer 1: ");
	scanf("%d",&a);
	printf("Please enter value of pointer 2: ");
	scanf("%d",&b);
	printf("Please enter value of pointer 3: ");
	scanf("%d",&c);
	swap(&a, &b, &c);
	printf("\nThe values have now become: \nPointer 1: %d \nPointer 2: %d\nPointer 3: %d",a,b,c);

}
