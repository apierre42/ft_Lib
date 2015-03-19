char	*ft_strchr(const char *s, int c)
{
	int	index;

	if (!s)
		return(void *)0;
	while(*s)
	{
		if (s[index] == char(c))
			return ((char *)&s[index]);
		index++;
		return(void *)0;
	}
}
