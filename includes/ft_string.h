#ifndef FT_STRING_H
# define FT_STRING_H

void	ft_bzero(void *s, int n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_memdel(void **ap);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s);
int	ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void(*f)(char *s));
void	ft_striteri(char *s, void(*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *des, char *src, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *des, const char *src, size_t n);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(char *s, int c);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strstrim(char const *s);

#endif
