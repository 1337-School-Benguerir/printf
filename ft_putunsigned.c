/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:48:14 by ayfadili          #+#    #+#             */
/*   Updated: 2024/03/10 12:09:51 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		++i;
	while (nb)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

int	ft_putunsigned(unsigned int nb)
{
	if (nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putunsigned(nb / 10);
		ft_putunsigned(nb % 10);
	}
	return (size(nb));
}
