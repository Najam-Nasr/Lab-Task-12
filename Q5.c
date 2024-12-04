#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    printf("Please enter total number of characters in your name: ");
    scanf("%d", &n);
    getchar();

    printf("Please enter your full name: ");
    char arr[n+1];
    fgets(arr, n+1, stdin);
    char *new = (char *)calloc(n+1, sizeof(char));
    strcpy(new, arr);
    printf("Dynamic array: %s\n", new);
    new = realloc(new, (n + 8) * sizeof(char)); // +7 for student ID, +1 for space
    printf("Please enter your student id: ");
    char id[8];
    scanf("%7s", id);
    memmove(new + strlen(id) + 1, new, strlen(new) + 1);
    strncpy(new, id, strlen(id));
    new[strlen(id)] = ' ';
	printf("Dynamic array: %s\n", new);

    free(new);

}
