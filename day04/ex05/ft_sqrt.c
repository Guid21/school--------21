// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		if(nb == -2147483648)
// 		{
// 			ft_putchar('2');
// 			nb = -147483648 ;
// 		}
// 		nb *= -1;
// 	}
// 	if (nb != 0 && ((nb / 10) != 0))
// 		ft_putnbr(nb / 10);
// 	ft_putchar(nb % 10 + '0');
// }

int		ft_sqrt(int nb)
{
	int		n;

	n = -1;
	while (++n <= (nb / 2))
		if ((n * n) == nb)
			return (n);
	return (0);
}

// int		main(void)
// {
// 	ft_putnbr(ft_sqrt(9));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_sqrt(7));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_sqrt(1000000));
// 	ft_putchar('\n');
// 	return (0);
// }
