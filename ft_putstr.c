/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:47:59 by ayfadili          #+#    #+#             */
/*   Updated: 2024/03/10 10:06:37 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	length;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	length = 0;
	while (*s != '\0')
	{
		write(1, s++, 1);
		length++;
	}
	return (length);
}
