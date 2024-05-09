/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:46:47 by ayfadili          #+#    #+#             */
/*   Updated: 2024/03/17 10:08:57 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	help(const char *s, va_list args)
{
	int	i;

	i = 0;
	if (*s == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (*s == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (*s == 'p')
	{
		i = ft_putstr("0x");
		i += ft_printhex(va_arg(args, unsigned long), "0123456789abcdef");
	}
	else if (*s == 'd' || *s == 'i')
		i = ft_putsigned(va_arg(args, int));
	else if (*s == 'u')
		i = ft_putunsigned(va_arg(args, int));
	else if (*s == 'x')
		i = ft_printhex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (*s == 'X')
		i = ft_printhex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (*s == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		l;

	va_start(args, s);
	l = 0;
	while (*s)
	{
		if (*s == '%')
		{
			++s;
			l += help(s, args);
			++s;
		}
		else
		{
			l += ft_putchar(*s);
			++s;
		}
	}
	va_end(args);
	return (l);
}
