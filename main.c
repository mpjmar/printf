/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:49:41 by maria-j2          #+#    #+#             */
/*   Updated: 2025/06/05 14:44:39 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	main(void)
{
	int	count1 = 0;
	int	count2 = 0;
	int	x = 123;

	printf("Prueba de caracter\n");
	count1 = ft_printf("ft_printf: %c\n", 'A');
	count2 = printf("printf: %c\n", 'A');
	printf("ft_printf devolvió: %d | printf devolvió: %d\n\n", count1, count2);

	printf("Prueba de string\n");
	count1 = ft_printf("ft_printf: %s\n", "Hola mundo");
	count2 = printf("printf: %s\n", "Hola mundo");
	printf("ft_print devolvió: %d | printf devolvió: %d\n\n", count1, count2);

	printf("Prueba de entero\n");
	count1 = ft_printf("ft_printf: %d\n", 42);
	count2 = printf("printf: %d\n", 42);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n\n", count1, count2);

	printf("Prueba de hexadecimal\n");
	count1 = ft_printf("ft_printf: %x\n", 255);
	count2 = printf("printf: %x\n", 255);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n\n", count1, count2);

	printf("Prueba de puntero\n");
	count1 = ft_printf("ft_printf: %p\n", &x);
	count2 = printf("printf: %p\n", &x);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n\n", count1, count2);

	printf("Prueba de porcentaje\n");
	count1 = ft_printf("ft_printf: %%\n");
	count2 = printf("printf: %%\n");
	printf("ft_printf devolvió: %d | printf devolvió: %d\n\n", count1, count2);

	return (0);
}
