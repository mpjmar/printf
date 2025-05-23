/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:00:21 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/23 20:25:21 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_select_type(va_list vargs, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(vargs, int)));
	if (c == 's')
		return (ft_putstr(va_arg(vargs, char *)));
/*	if (c == 'p')
		return ft_putptr(va_arg(vargs, void*)); //hex pointer */
	if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(vargs, int)));
	if (c == 'u')
		return (ft_putunbr(va_arg(vargs, unsigned int)));
/*	if (c == 'x' || c == 'X')
		return ft_puthex(); //base 16*/
	if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(char const *format, ...)
{
	va_list	vargs;
	int		count;

	count = 0;
	va_start(vargs, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = ft_select_type(vargs, *format);
		}
		else
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(vargs);
	return (count);
}

int	main(void)
{
	char var = '';
	ft_printf("ft_print:%c\n", var);
	printf("printf:%c\n", var);
	
	/* char *var = NULL;
	ft_printf("ft_print:%s\n", var);
	printf("printf:%s\n", var); */
	
	/* long n = 3222222;
	//long number = 212222222222222;
	printf("printf:		%li\n", n);
	ft_printf("ft_printf: %i\n", n); */
	
	//printf("%x\n", n);

	// PROBAR!! caractes NULL, "" vacios, 

	return (0);
}
