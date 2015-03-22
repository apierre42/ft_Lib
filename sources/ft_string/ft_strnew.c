char	*ft_strnew(size_t size)
{
	char	*newstr;

	newstr = (char *)malloc(size);
	if (!newstr)
		return (NULL);
	ft_bzero(newstr, size + 1);
	return (newstr);
}
