unsigned int	ft_strlen(char *s)
{
	int	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest,char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(dest) >= size)
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
