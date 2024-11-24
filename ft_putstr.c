/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:33:09 by jterrada          #+#    #+#             */
/*   Updated: 2024/11/24 13:28:07 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	size;

	size = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		size += write(1, s, 1);
		s++;
	}
	if (size < 0)
		return (-1);
	return (size);
}
// int	ft_put_s(char *str)
// {
// 	int	count;

// 	count = 0;
// 	if (str == NULL)
// 		return (write(1, "(null)", 6));
// 	while (str[count])
// 	{
// 		write (1, &str[count], 1);
// 		count++;
// 	}
// 	if (count < 0)
// 		return (-1);
// 	return (count);
// }