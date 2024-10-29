/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:24:21 by jterrada          #+#    #+#             */
/*   Updated: 2024/09/13 14:25:26 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upp(unsigned long n)
{
	int		size;
	char	hex[16];
	int		temp;

	size = 0;
	ft_strcpy(hex, "0123456789ABCDEF");
	if (n >= 16)
	{
		size = ft_puthex_upp(n / 16);
	}
	temp = hex[n % 16];
	write(1, (char *)&temp, 1);
	size++;
	return (size);
}

// #include <stdio.h>
// int main(void)
// {
// 	ft_puthex_upp(255);
// }