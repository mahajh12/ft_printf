/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:35:21 by malhamel          #+#    #+#             */
/*   Updated: 2023/01/09 12:20:59 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_checker(char f, va_list arg)
{
	int	len;

	len = 0;
	if (f == 'c')
		len += my_putchar(va_arg(arg, int));
	else if (f == 's')
		len += my_putstr(va_arg(arg, char *));
	else if (f == 'x' || f == 'X')
		len += my_puthexa(va_arg(arg, unsigned int), f);
	else if (f == 'i' || f == 'd')
		len += my_putnbr(va_arg(arg, int));
	else if (f == 'u')
		len += my_unsigned(va_arg(arg, unsigned int));
	else if (f == 'p')
		len += my_putptr(va_arg(arg, unsigned long));
	else if (f == '%')
		len += my_putchar('%');
	return (len);
}
