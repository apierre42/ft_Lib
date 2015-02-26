void	ft_putstr(char const *s)
{
	int	index;

	while(s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
}
