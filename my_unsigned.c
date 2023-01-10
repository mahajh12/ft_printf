/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:42:29 by malhamel          #+#    #+#             */
/*   Updated: 2023/01/08 17:19:24 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	my_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr < 10)
		len += my_putchar(nbr + '0');
	else
	{
		len += my_putnbr(nbr / 10);
		len += my_putchar(nbr % 10 + '0');
	}
	return (len);
}
