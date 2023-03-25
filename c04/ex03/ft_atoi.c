int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
			return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		if (is_space(str[i]))
			i++;
		else if	(str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
			i++;
	}
	return (sign * result);
}
