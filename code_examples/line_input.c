#include <stdio.h>

int main() {
		/* How long the string will be*/
		char line[1000];
		printf("Enter line\n");
		/* Scan the whole line auntil 1000 characters */
		scanf("%[^\n]1000s", line);
		printf("Line: %s\n", line);
}