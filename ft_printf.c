/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:15:58 by jterrada          #+#    #+#             */
/*   Updated: 2024/12/08 15:14:40 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_fork(va_list args, const char c)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(args, int), c));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putpointer(va_arg(args, void *)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else
		return (ft_putchar('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	int			i;
	int			temp;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			temp = ft_printf_fork(args, format[i + 1]);
			i++;
		}
		else
			temp = ft_putchar(format[i]);
		if (temp < 0)
			return (-1);
		count += temp;
		i++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("testing test %z\n");
// 	ft_printf("testing test %z\n");
// }