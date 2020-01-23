#include <unistd.h>

void	print_c(char t);
void	print_a(char *test);
void	print_n(int q);

/*int main(void)
{
	int apple;
	int *pointer_apple;

	apple = 23;
	pointer_apple = &apple;
	print_a("Variable\tWhat value it holds\n");
	print_a("apple\t\t");
	print_n(apple);
	print_c('\n');
	print_a("pointer_apple\t");
	print_n(*pointer_apple);
	print_c('\n');
}*/

int main(void)
{
	char apple;
	char *pointer_apple;

	apple = 'c';
	pointer_apple = &apple;
	print_a("Variable\tWhat value it holds\n");
	print_a("apple\t\t");
	print_c(apple);
	print_c('\n');
	print_a("pointer_apple\t");
	print_c(*pointer_apple);
	print_c('\n');
}
