size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;

	lendst = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size <= lendest)
		return (size + lensrc);
	if (lensrc < size - lendest)
	{
		ft_memcpy(dest + lendest, src, lensrc);
		dest += lendest + lensrc;
	}
	else
	{
		ft_memcpy(dest + lendest, src, size - lendest - 1);
		dest += size - 1;
	}
	*dest = '\0';
	return (lensrc + lendest);
}
