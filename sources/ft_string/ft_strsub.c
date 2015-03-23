char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*str;

	if (!s)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!tmp)
		return (NULL);
	str = tmp;
	s += start;
	while (len--)
		*tmp++ = *s++
	*tmp = 0;
	return (str);
}
