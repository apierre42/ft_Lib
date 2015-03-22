char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char		*str;
	unsigned int	i;
	size_t		len;

	if (s && f)
	{
		len = ft_strlen(s);
		str = (char *)malloc(sizeof(char)*(ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		i = 0;
		while (i < l)
		{
			*str = (*f)(s++, *s);
			i++;
		}
		*str = 0;
		return (tmp);
	}
	return (NULL);
}
