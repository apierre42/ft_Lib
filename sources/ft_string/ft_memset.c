void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0' && index < n)
	{
		s[index] = c;
		index++;
	}
}
