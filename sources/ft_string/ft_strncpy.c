static void	ft_bzero(char *s, size_t n)
{
	size_t	index;
	char	*tmp;

	tmp = s;
	while (index < n)
	{
		tmp[index] = 0;
		index++;
	}
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	if (!dest || !src)
		return (void *)0;
	if (n < 0)
		return (dest);
	ft_bzero(dest, n);
	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
