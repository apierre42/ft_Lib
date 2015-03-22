void	ft_striteri(char *s, void(*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s && !f)
		return (void *)0;
	while (*s)
		(*f)(i++, s++);
}