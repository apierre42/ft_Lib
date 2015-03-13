void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t	index;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	inde = 0;
	while (index < n)
	{
		dest2[index] = src2[index];
		index++;
	}
	return (dest);
}
