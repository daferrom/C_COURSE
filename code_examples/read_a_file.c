#include <stdio.h>

int main() {
	/* The number of characters need to be defined before eve*/
	char line[1000];
	FILE *hand;
	/* open in python inspired by the fopen in c */
	hand = fopen("romeo.txt", "r");
	while( fgets(line, 1000, hand) != NULL) {
		printf("%s", line);
	}
}