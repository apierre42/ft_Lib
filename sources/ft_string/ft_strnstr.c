char	*ft_strnstr(const char *s1,const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	if (*s2 == '\0')
		return (char *)s1;
	while (*s1 && index < n)
	{
		if(ft_memcmp(s1, s2, ft_strlen(s2)) == 0)
			return (char *)s1;
		index++;
	}
	return (NULL);
}
