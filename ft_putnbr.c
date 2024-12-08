/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:33:23 by jterrada          #+#    #+#             */
/*   Updated: 2024/12/08 14:32:37 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	temp;
	int	size;
	int	check;

	size = 0;
	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	if (n < 0)
	{
		if (write(1, "-", 1) < 0)
			return (-1);
		n = -n;
		size++;
	}
	if (n / 10)
	{
		check = ft_putnbr(n / 10);
		if (check < 0)
			return (-1);
		size += check;
	}
	temp = (n % 10) + '0';
	if (write (1, &temp, 1) < 0)
		return (-1);
	return (++size);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("\n%d\n", ft_putnbr(123456789));
// 	ft_putnbr(0);
// }