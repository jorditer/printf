/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:34:34 by jterrada          #+#    #+#             */
/*   Updated: 2024/12/08 14:10:10 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int				count;
	char			*alpha;
	unsigned long	arg2;
	int				temp;

	if (!ptr)
		return (write(1, "(nil)", 5));
	arg2 = (unsigned long)ptr;
	alpha = "0123456789abcdef";
	count = 0;
	count += ft_putstr("0x");
	temp = ft_put_x(arg2, alpha);
	if (temp < 0)
		return (-1);
	count += temp;
	return (count);
}
