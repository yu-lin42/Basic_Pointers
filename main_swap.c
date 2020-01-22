void	print_c(char t);
void	print_a(char *test);
void	print_n(int q);
void	ft_swap(int *a, int *b);

int 	main()
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
	return (1);
}


