static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	while (*s != '\0')
	{
		if (index == 1 && *s == c)
			index = 0;
		else if (index == 0 && *s != c)
		{
			index = 1;
			count++;
		}
		s++;
	}
	return (count);
}
static int	ft_wordlen(const char *s, char c)
{
	int	len;
	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	int	word_count;
	int	index;
	if (!s)
		return (NULL);
	index = 0;
	word_count = ft_count_words(s, c);
	t = (char **)malloc(sizeof(*t) * (word_count + 1));
	if (t == NULL)
		return (NULL);
	while (word_count--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = ft_strsub(s, 0, ft_wordlen(s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_wordlen(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
