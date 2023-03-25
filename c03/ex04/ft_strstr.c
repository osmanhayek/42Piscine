int	ft_strlen(char *s)
{
	int size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (!to_find)
		return (str);
	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if(str[i] == to_find[j])
		{
			if(!to_find[j+1])
				return (&str[i - ft_strlen(to_find) + 1]);
			i++;
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
