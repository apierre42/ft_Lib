void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	if(!s || n == 0)
		return(NULL);
	tmp = (unsigned char *)s
	while (n--)
	{
		if (*tmp == (unsigned char )c)
			return (tmp);
		tmp++;
	}
	return (NULL);
}
