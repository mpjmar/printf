/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:00:21 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/22 17:14:06 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_select_type (char c)
{
	if (c = 'c') ft_putchar(); //character
	else if (c = 's') ft_putstr(); //string
	else if (c = 'p') ft_putptr(); //hex pointer
	else if (c = 'd') ft_putnbr(); //base 10 decimal
	else if (c = 'i') ft_putnbr(); //base 10 integer
	else if (c = 'u') ft_putunbr(); //base 10 unsigned decimal
	else if (c = 'x') ft_putlower_hex(); //base 16 lower hex number
	else if (c = 'X') ft_putupper_hex(); //base 16 upper hex number
	else if (c = '%') ft_putchar(); //percent symbol
}


int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	int		next;
	int		i;
	int		count;

	i = 0;
	va_start(vargs, i);
	while (format[i])
	{
		next = va_arg(vargs, char);
		if (format[i] == '%')
		{
			i++;
			ft_select_type(format[i]);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(vargs);
	return (count);
}

