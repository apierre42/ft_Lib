void	ft_strclr(char *s)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		*s = 0;
		s++;
	}
}
