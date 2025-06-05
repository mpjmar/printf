/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:15:40 by maria-j2          #+#    #+#             */
/*   Updated: 2025/06/05 14:38:37 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putunbr_pf(unsigned long n, int base, char c)
{
	char	*symbols_low;
	char	*symbols_upp;
	int		count;

	symbols_low = "0123456789abcdef";
	symbols_upp = "0123456789ABCDEF";
	count = 0;
	if (n < (unsigned long)base && c == 'X')
		return (write(1, &symbols_upp[n], 1));
	else if (n < (unsigned long)base)
		return (write(1, &symbols_low[n], 1));
	else
	{
		count = ft_putunbr_pf(n / base, base, c);
		return (count + ft_putunbr_pf(n % base, base, c));
	}
	return (count);
}

/* #include <stdio.h>

int main(void)
{
	int count1 = 0;
	int count2 = 0;
	
	printf("Prueba hexadecimal minúsculas\n");
	count1 = ft_putunbr_pf(255, 16, 'x');
	count1 += write(1, "\n", 1);
	count2 = printf("%x\n", 255);
	
	printf("ft_putunbr: %d\n", count1);
	printf("printf: %d\n", count2);

	return 0;
} */
