/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:44:32 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/28 19:59:52 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	*ft_puthex_pf(unsigned int n)
{
	char	*resul;
	size_t	size;

	size = ft_get_size_pf(n);
	resul = malloc((size + 1) * sizeof(char));
	if (!resul)
		return ;
	resul[size] = '\0';
	size--;
	while (n > 0) //IMPRIMIR CARACTERES!!!!
	{
		resul[size--] = n % 16 + '0';
		n /= 16;
	}
	ft_putstr_pf(resul);
	return ((int) size);
}
