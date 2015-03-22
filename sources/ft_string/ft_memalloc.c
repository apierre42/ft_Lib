void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)malloc(size);
	if (ptr)
		while (size--)
			ptr[size-1] = 0;
	return ((void *)ptr);
}
