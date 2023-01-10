/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:07:02 by malhamel          #+#    #+#             */
/*   Updated: 2023/01/09 12:20:35 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>
# include   <stdio.h>

int		ft_printf(const char *format, ...);
int		my_putchar(int c);
int		my_putstr(char *s);
int		my_puthexa(unsigned int nbr, char f);
int		my_putnbr(int n);
int		format_checker(char f, va_list arg);
int		my_unsigned(unsigned int nbr);
int		my_putptr(unsigned long nbr);

#endif