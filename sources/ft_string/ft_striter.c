void	ft_striter(char *s, void (*f)(char *))
{
	if (!s && !f)
		return (void *)0;
	while (*s)
		(*f)(s++);
}
