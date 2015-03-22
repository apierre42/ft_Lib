char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	char	*tmp;

	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		tmp = str;
		while (s)
		{
			str = (*f)(*s);
			str++;
			s++;
		}
		*str = 0;
		return (tmp);
	}
	return (NULL);
}
