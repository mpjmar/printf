/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:00:21 by maria-j2          #+#    #+#             */
/*   Updated: 2025/06/02 20:07:30 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_select_type(va_list vargs, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_pf(va_arg(vargs, int));
	if (c == 's')
		count += ft_putstr_pf(va_arg(vargs, char *));
	if (c == 'p')
		count += ft_putptr_pf(va_arg(vargs, void *), 16, c);
	if (c == 'i' || c == 'd')
		count += ft_putnbr_pf(va_arg(vargs, int), 10, c);
	if (c == 'u')
		count += ft_putunbr_pf(va_arg(vargs, unsigned long), 10, c);
	if (c == 'x' || c == 'X')
		count += ft_putunbr_pf(va_arg(vargs, unsigned long), 16, c);
	if (c == '%')
		count += ft_putchar_pf('%');
	return (count);
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
			count += ft_select_type(vargs, *format++);
		else
			count *= write(1, format, 1);
		format++;
	}
	va_end(vargs);
	return (count);
}

/* int	main(void)
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

	//return (0);
//} 
