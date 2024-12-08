/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:10:11 by jterrada          #+#    #+#             */
/*   Updated: 2024/11/24 13:00:40 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"

int	ft_put_x(unsigned long nb, char *alpha)
{
	int	count;
	int	temp;

	count = 0;
	if (nb > 15)
	{
		count += ft_put_x(nb / 16, alpha);
		count += ft_put_x(nb % 16, alpha);
	}
	else
	{
		temp = ft_putchar(alpha[nb]);
		if (temp < 0)
			return (-1);
		else
			count += temp;
	}
	return (count);
}

int	ft_puthex(unsigned int nb, int type)
{
	char	*alpha;

	if (type == 'x')
		alpha = "0123456789abcdef";
	else
		alpha = "0123456789ABCDEF";
	return (ft_put_x(nb, alpha));
}

// #include <stdio.h>
// int main(void)
// {
// 	ft_put_x(ULONG_MAX);
// 	printf("hey this throws an error \n%x\n", ULONG_MAX);
// 	// printf("normal %d\n", printf("\n%d\n", ft_put_x(92233720)));
// 	// printf("ft %d\n", ft_printf("\n%d\n", ft_put_x(92233720)));
// 	printf(" %x ", LONG_MAX);
// }