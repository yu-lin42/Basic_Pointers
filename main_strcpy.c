#include <stdlib.h>

void	print_a(char *test);
void	print_c(char t);
char 	*ft_strcpy(char *destination, char *source);

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int		main()
{
	char change[] = "Aye";
	char original[] = "Bye";

	print_a("Before:\t");
	print_a(str1);
	print_c('\n');
	print_a(str2);
	print_c('\n');
	ft_strcpy(str1, str2);
	print_a("After:\t");
	print_a(str1);
	print_c('\n');
	print_a(str2);
	print_c('\n');
}*/

int		main(int argc, char **argv)
{
	char *str1;
	char *str2;
	int len;
	
	str1 = argv[1];
	len = ft_strlen(str1);
	str2 = (char*)malloc(sizeof(char) * (len + 1));
	str2[0] = '\0';

	print_a("Before:\n");
	print_a("str1 = ");
	print_a(str1);
	print_c('\n');
	print_a("str2 = ");
	print_a(str2);
	print_c('\n');
	ft_strcpy(str2, str1);
	print_c('\n');
	print_a("After:\n");
	print_a("str1 = ");
	print_a(str1);
	print_c('\n');
	print_a("str2 = ");
	print_a(str2);
	print_c('\n');
}
