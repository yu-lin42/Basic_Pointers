#include <stdlib.h>

void	print_c(char t);
void	print_a(char *test);
void	print_n(int q);
void	ft_swap(int *a, int *b);

/*int 	main()
{
	int one;
	int two;

	one = 1;
	two = 2;
	ft_swap(&one, &two);
	print_n(one);
	print_c('\n');
	print_n(two);
	print_c('\n');
	return (0);
}*/

int		main(int ac, char **av)
{
	int a;
	int b;

	a = atoi(av[1]);
	b = atoi(av[2]);

	print_a("Before swapping:\n");
	print_a("a = ");
	print_n(a);
	print_c('\n');
	print_a("b = ");
	print_n(b);
	print_a("\n\n");

	print_a("After swapping:\n");
	ft_swap(&a, &b);
	print_a("a = ");
	print_n(a);
	print_c('\n');
	print_a("b = ");
	print_n(b);
	print_c('\n');
}
