int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*strcpy(char *src, char *dest)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
