/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:34:34 by jterrada          #+#    #+#             */
/*   Updated: 2024/11/24 14:19:29 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int				count;
	char			*alpha;
	unsigned long	arg2;

	if (!ptr)
		return (write(1, "(nil)", 5));
	arg2 = (unsigned long)ptr;
	alpha = "0123456789abcdef";
	count = 0;
	count += ft_putstr("0x");
	count += ft_put_x(arg2, alpha);
	return (count);
}
