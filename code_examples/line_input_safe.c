#include <stdio.h>

int main(){
		char line[1000];
		printf("Enter line\n");
		/* read this from standard input stdin*/
		fgets(line, 1000, stdin);
		printf("Line: %\n", line);
}