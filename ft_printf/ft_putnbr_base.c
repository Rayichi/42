#include "ft_printf.h"

static int	ft_put_base(long nb, char *base, int size)
{
	int i;
	
	i = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
		i++;
	}
	if (nb > size - 1)
		i += ft_put_base(nb / size, base, size);
	ft_putchar_fd(base[nb % size], 1);
	return (++i);
}

int	ft_putnbr_base(long nb, char *base)
{
	int	i;

	i = ft_strlen(base);
	return(ft_put_base(nb, base, i));
}