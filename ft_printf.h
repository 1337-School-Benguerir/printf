/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayfadili <ayfadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:46:11 by ayfadili          #+#    #+#             */
/*   Updated: 2024/03/10 12:14:22 by ayfadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printhex(unsigned long address, char *s);
int	ft_putsigned(int nb);
int	ft_putunsigned(unsigned int nb);

#endif
