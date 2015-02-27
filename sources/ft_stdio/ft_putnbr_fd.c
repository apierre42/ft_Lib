#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", fd);
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
