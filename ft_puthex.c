/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:10:11 by jterrada          #+#    #+#             */
/*   Updated: 2024/10/30 23:47:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"

int	ft_puthex(unsigned long n)
{
	int		size;

	// if (n > LONG_MAX)
	// 	return (-1);
	size = 0;
	if (n >= 16)
		size += ft_puthex(n / 16);
	if (n % 16 < 10)
		size += ft_putchar(n % 16 + '0');
	else
		size += ft_putchar(n % 16 - 10 + 'a');
	return (size);
}

// #include <stdio.h>
// int main(void)
// {
// 	ft_puthex(ULONG_MAX);
// 	printf("\n%x\n", ULONG_MAX);
// 	// printf("normal %d\n", printf("\n%d\n", ft_puthex(92233720)));
// 	// printf("ft %d\n", ft_printf("\n%d\n", ft_puthex(92233720)));
// }