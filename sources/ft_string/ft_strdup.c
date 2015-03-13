char	*ft_strdup(const char *s)
{
	int	index;
	char	*tmp;

	index = 0;
	tmp = malloc (sizeof(char) * (ft_strlen(s) + 1));
	while (s[index] != '\0')
	{
		tmp[index] = s[index];
		index++;
	}
	return (tmp);
}
