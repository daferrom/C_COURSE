#include <stdio.h>

int main() {
				/* Here goes the int variables definitions*/
				int usf, euf;
				printf("Enter US Floor\n");
				/* This scanf comes from <stdio.h>*/
				/* & call by reference not by value for simple varibles like int and floats */
				scanf("%d", &usf);
				euf = usf -1;
				printf("EU Floor %d\n", euf);
}
