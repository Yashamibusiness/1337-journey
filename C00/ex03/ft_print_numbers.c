#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}
/*#include <stdio.h>
int main()
{
	ft_print_numbers();
	printf("\n");
}*/
