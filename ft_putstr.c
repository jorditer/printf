/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:33:09 by jterrada          #+#    #+#             */
/*   Updated: 2024/12/08 14:29:50 by jterrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	size;
	int	temp;

	size = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		temp = write(1, s, 1);
		if (temp < 0)
			return (-1);
		size += temp;
		s++;
	}
	return (size);
}
