void	print_a(char *test);
void	print_c(char t);
char 	*ft_strcpy(char *destination, char *source);

int		main()
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
}
