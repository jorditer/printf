/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:34:34 by jterrada          #+#    #+#             */
/*   Updated: 2024/11/24 09:57:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	unsigned long	i;
	int				size;

	size = 0;
	if(!ptr)
	{
		return (write(1, "(nil)", 5));
	}
	size += ft_putstr("0x");
	i = (unsigned long)ptr;
	size += ft_puthex(((unsigned long)i));
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 5;
// 	char s[] = "test";
// 	unsigned long b = 19;

// 	printf("%p\n%p\n%p\n", &a, &b, s);
// 	ft_putpointer(&a);
// 	printf("\n");
// 	ft_putpointer(&b);
// 	printf("\n");
// 	ft_putpointer(&s);
// 	printf("\n");
// 	printf("\n%d\n%d\n%d\n", ft_putpointer(&a), ft_putpointer(&b), ft_putpointer(s));
// 	void *p = NULL;
// 	printf("%d", printf("\n%p\n", NULL));
// 	printf("%d", ft_printf("\n%p\n", NULL));
// }