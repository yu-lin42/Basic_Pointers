int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int				ft_atoi(char *str)
{
	int nbr;
	int check;

	nbr = 0;
	check = 1;
	while ((*str == '\n') || (*str == '\t') || (*str == '\v')
			|| (*str == ' ') || (*str == '\f') || (*str == '\r'))
		str++;
	if (str == 0)
		return (0);
	if (*str == '-')
		check = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		nbr = (nbr * 10) + (*str - 48) * check;
		str++;
	}
	return (nbr);
}
