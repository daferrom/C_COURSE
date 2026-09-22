#include <stdio.h>

int main() {
				/* This is a character array*/
				char name[100];
				printf("Enter name\n");
				/* name var withour te & adress the ref of the array of characters */
				scanf("%99s", name);
				printf("Hello %s\n", name);
}