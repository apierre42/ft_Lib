char	*ft_strcat(char *dest, const char *src)
{
	char	*tmp;

	tmp = dest;
	while(*dest)
		dest++;
	while(*src)
		*tmp++ = *src++;
	*tmp = 0;
	return (dest);
}
