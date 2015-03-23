char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	char	*str;
	int	l1;
	int	l2;

	l1 = ft_strlen(l1);
	l2 = ft_strlen(l2);
	tmp = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!tmp || !s1 || !s2)
		return (NULL);
	str = tmp;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = 0;
	return (str);
}
