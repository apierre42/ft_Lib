static size_t	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
		index++;
	return (index;)
}

char	*ft_strrchr(char *s, int c)
{
	int	len;

	if (!s)
		return (NULL);
	len = ft_strlen(*s);
	while (len >= 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
