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

int		ft_fibonacci(int index)
{
	if (index == 1 || index == 2) {
        return 1;
    } else {
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    }
}

// int		main(void)
// {
// 	ft_putnbr(ft_fibonacci(1));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_fibonacci(3));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_fibonacci(5));
// 	ft_putchar('\n');
// 	return (0);
// }
