#include "ft_printf.h"

int	ft_char(va_list ag)
{
	ft_putchar_fd((char)va_arg(ag, int), 1);
	return (1);
}

int	ft_str(va_list ag)
{
	char	*str;

	str = (char *)va_arg(ag, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_case(const char c, va_list ag)
{
	int	i;

	i = 0;
	if	(c == 'c')
		return (ft_char(ag));
	else if (c == 's')
		return (ft_str(ag));
	else if (c == 'p')
		return (ft_putnbr_base((int) va_arg(ag, int), "0123456789ABCDEF"));
	else if (c == 'd')
		return (ft_putnbr_base((int) va_arg(ag, int), "0123456789"));
	else if (c == 'i')
		return (ft_putnbr_base((int) va_arg(ag, int), "0123456789"));
	else if (c == 'u')
		i = ft_putnbr_base((unsigned int) va_arg(ag, unsigned int), "0123456789");
	else if (c == 'x')
		return (ft_putnbr_base((int) va_arg(ag, int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_base((int) va_arg(ag, int), "0123456789ABCDEF"));
	else if (c == '%')
	{
		i = 1 + (ft_putnbr_base((int) va_arg(ag, int), "0123456789"));
		ft_putchar_fd('%', 1);
	}
	return (i);
}

int	ft_printf(const char *format,...)
{
	va_list	ag;
	int		i;

	va_start(ag, format);
	i = 0;
	while (format && *format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			i++;
		}
		else
		{
			format++;
			i = ft_case(*format, ag);
		}
		format++;
	}
	return (i);
}

int main()
{
	char *str = "non.";
	int nb = 42;
	ft_printf("bonjour, %s, %i\n", str, nb);
}