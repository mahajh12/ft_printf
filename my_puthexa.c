/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:29:20 by malhamel          #+#    #+#             */
/*   Updated: 2023/01/09 14:38:46 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_len(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

int	my_puthexa(unsigned int nbr, char f)
{
	int	len;

	len = hexa_len(nbr);
	if (nbr >= 16)
	{
		my_puthexa(nbr / 16, f);
		my_puthexa(nbr % 16, f);
	}
	else if (nbr <= 9)
		my_putchar(nbr + '0');
	else if (nbr > 9 && nbr < 16)
	{
		if (f == 'X')
			my_putchar('A' + nbr % 16 - 10);
		else
			my_putchar('a' + nbr % 16 - 10);
	}
	return (len);
}
// int main()
// {
// 	hexa(11, 'x');
// }