/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:15:58 by jterrada          #+#    #+#             */
/*   Updated: 2024/10/25 14:43:59 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_fork(va_list args, const char c)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned long)));
	else if (c == 'X')
		return (ft_puthex_upp(va_arg(args, unsigned long)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putpointer(va_arg(args, void *)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int ft_printf(char const *format, ...)
{
	va_list	args;
	int size;

	size = 0;
	va_start(args, format);
	while (*format)
	{
		if(*format == '%')
		{
			format++;
			size += ft_printf_fork(args, *format);
			if(*format)
				format++;
		}
		else
		{
			size += ft_putchar(*format);
			format++;
		}
	}
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 5;
// 	char s[] = "test";
// 	unsigned int b = 19;

// 	printf("%p\n%p\n%p", &a, &b, s);
// 	ft_printf("\n%p\n%p\n%p", &a, &b, s);
// }