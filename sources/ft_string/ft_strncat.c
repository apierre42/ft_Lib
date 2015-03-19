char	*ft_strncat(char *dest, char *src, size_t n)
{
	char	*tmp;
	size_t	index;

	if (!src || !dest)
		return (void *)0;
	tmp = src;
	while (*dest)
		dest++;
	while (*src && index++ < n)
		*tmp++ = *src++
	*dest = '\0';
	return (dest)
}
