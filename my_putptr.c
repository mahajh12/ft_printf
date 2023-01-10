/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:42:12 by malhamel          #+#    #+#             */
/*   Updated: 2023/01/08 17:20:52 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	my_hexalong(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr >= 16)
		len += my_hexalong(nbr / 16);
	if (nbr % 16 < 10)
		len += my_putchar(nbr % 16 + '0');
	else
		len += my_putchar(nbr % 16 - 10 + 'a');
	return (len);
}

int	my_putptr(unsigned long nbr)
{
	int	len;

	len = 0;
	len += my_putstr("0x");
	if (nbr == 0)
		len += my_putchar('0');
	else
		len += my_hexalong(nbr);
	return (len);
}
