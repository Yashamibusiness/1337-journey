#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_rec(int n, int pos, char start, char digits[10])
{
	int	i;

	if (pos == n)
	{
		write(1, digits, n);
		if (digits[0] != '0' + 10 - n)
			write(1, ", ", 2);
		return ;
	}
	i = start;
	while (i <= '9' - (n - pos - 1))
	{
		digits[pos] = i;
		ft_print_combn_rec(n, pos + 1, i + 1, digits);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	digits[10];

	if (n < 1 || n > 9)
		return ;
	ft_print_combn_rec(n, 0, '0', digits);
}
