void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	unsigned int	index;

	dest2 = (unsigned char *) dest;
	src2 = (unsigned char *) src;
	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest2[index] = src2[index];
		if((unsigned char *)src2[index] == (unsigned char *)c)
			return (dest2);
		else
			index++;
	}
	return (NULL);
}
