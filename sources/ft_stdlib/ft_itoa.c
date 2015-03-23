static int	count(int i)
{
	int	j;

	j = 0;
	while (i /= 10)
		j++;
	return (j + 1);
}

char	*ft_itoa(int i)
{
	size_t	size;
	char	*tmp;
	char	*str;

	size = count(i);
	str = (char *)malloc(sizeof(char) * (size + (i < 0 ? 1 : 0) + 1));
	if (!str)
		return (NULL);
	tmp = str;
	if (i == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (i < 0)
	{
		*tmp++ = '-';
		i = -i;
	}
	tmp += size - 1;
	*(tmp + 1) = 0;
	while (size--)
	{
		*tmp-- = (char)(i % 10 + '0');
		i /= 10;
	}
	return (str);
}
