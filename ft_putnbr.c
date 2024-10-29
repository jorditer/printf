/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:33:23 by jterrada          #+#    #+#             */
/*   Updated: 2024/09/13 13:12:09 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	temp;
	int	size;

	size = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		size++;
	}
	if (n / 10)
	{
		size += ft_putnbr(n / 10);
	}
	temp = (n % 10) + '0';
	write (1, &temp, 1);
	size++;
	return (size);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("\n%d\n", ft_putnbr(123456789));
// 	ft_putnbr(0);
// }