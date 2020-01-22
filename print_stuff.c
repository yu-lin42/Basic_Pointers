#include <unistd.h>

void	print_c(char t)
{
	write(1, &t, 1);
}

void	print_a(char *test)
{
	int move;

	move = 0;
	while (test[move] != '\0')
	{
		print_c(test[move]);
		move++;
	}
}

void	print_n(int q)
{
	if (q < 0)
	{
		print_c('-');
		q = q * -1;
	}
	if (q >= 10)
		print_n(q / 10);
	print_c(q % 10 + 48);
}
