static int	ft_isspace(int c)
{
	if (c == ' ' || c == ',' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	char	*str;
	int	index;

	if (!s)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!tmp)
		return (NULL);
	str = tmp
	index = 0;
	while (*s)
	{
		if (ft_isspace(*s++) == 1)
			s++;
		*tmp++ = *s++;
	}
	return (str);
}
