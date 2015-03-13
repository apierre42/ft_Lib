char	*ft_strcpy(char *dest, const char *src)
{
	int	index;

	if (!dest || ! src)
		return(void *)0;
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
