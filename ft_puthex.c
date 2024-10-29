/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:10:11 by jterrada          #+#    #+#             */
/*   Updated: 2024/10/25 14:57:23 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n)
{
	int		size;
	char	hex[16];

	size = 0;
	ft_strcpy(hex, "0123456789abcdef");
	if (n >= 16)
	{
		size += ft_puthex(n / 16);
	}
	size += ft_putchar(hex[n % 16]);
	return (size);
}

#include <stdio.h>
int main(void)
{
	// printf("\n%d\n", ft_puthex(1220));
	// ft_printf("\n%d\n", ft_puthex(1220));
	printf("normal %d\n", printf("\n%d\n", ft_puthex(9223372036854775807)));
	printf("ft %d\n", ft_printf("\n%d\n", ft_puthex(9223372036854775807)));
}