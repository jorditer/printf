#include "ft_printf.h"

int	main(void)
{
	ft_putunsigned(12435678);
	write(1, "\n", 1);
	ft_putnbr(12435678);
	write(1, "\n", 1);
	ft_puthex(555);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
}