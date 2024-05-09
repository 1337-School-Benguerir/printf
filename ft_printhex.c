/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:47:09 by ayfadili          #+#    #+#             */
/*   Updated: 2024/03/10 10:36:49 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_numlen_int(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		++i;
	while (nb > 0)
	{
		++i;
		nb /= 16;
	}
	return (i);
}

int	ft_printhex(unsigned long address, char *s)
{
	if (address == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (address > 15)
	{
		ft_printhex(address / 16, s);
		ft_putchar(s[address % 16]);
	}
	else
		ft_putchar(s[address % 16]);
	return (ft_numlen_int(address));
}
