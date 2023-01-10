/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:52:24 by malhamel          #+#    #+#             */
/*   Updated: 2023/01/08 17:46:28 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{	
			i++;
			len += format_checker(format[i], arg);
		}
		else
			len += my_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

// int main (void)
// {
// 	// ft_printf("hello world\n");
// 	// ft_printf("%d\n", 5);
// 	// ft_printf("%d\n", 66);
// 	// ft_printf("%c\n", 'm');
// 	// ft_printf("%s\n", "hello world!");
// 	// ft_printf("%u\n", 1234);
// 	// ft_printf("%p", )
// 	// ft_printf("%%%%\n");
// 	// ft_printf("FT:%s NULL ", NULL);
// 	// ft_printf("%s %s\n", "-test", "-" );
// 	// ft_printf(" %d ", 0);
// 	// ft_printf(" %d ", -1);
// 	// ft_printf(" %p ", -1);
// 	ft_printf(" %d ", 1);
// }