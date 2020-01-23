#include <stdio.h>

int main(void)
{
	int variable;

	variable = 3;
	printf("The address of variable is %p\n", &variable);
	printf("---------------------------------------------------\n");
	printf("The value of variable is %d\n", variable);
}
