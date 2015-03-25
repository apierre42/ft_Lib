char	*ft_duostr(const char *s1; const char *s2)
{
	char	tmp;
	char	str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	tmp = str;
	if (!str)
		exit(1);
	while (*s1)
		*tmp++ = *s1++;
	*tmp++  = c;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = 0;
	return (str);
}
