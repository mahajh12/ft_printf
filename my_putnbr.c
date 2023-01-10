/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:31:10 by malhamel          #+#    #+#             */
/*   Updated: 2023/01/08 17:20:07 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	my_putnbr(int n)
{
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		len += my_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr < 10)
		len += my_putchar(nbr + '0');
	else
	{
		len += my_putnbr(nbr / 10);
		len += my_putchar(nbr % 10 + '0');
	}
	return (len);
}

// int main()
// {
// 	my_putnbr(42);
// }