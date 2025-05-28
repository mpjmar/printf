/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:15:18 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/28 19:28:08 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_itoa_pf(int n)
{
	long	num;
	char	*resul;
	size_t	size;

	num = n;
	size = ft_get_size_pf(n);
	if (n < 0)
		num *= -1;
	resul = malloc((size + 1) * sizeof(char));
	if (!resul)
		return (NULL);
	resul[size] = '\0';
	size--;
	while (num > 0)
	{
		resul[size--] = num % 10 + '0';
		num /= 10;
	}
	if (size == 0 && resul[1] == '\0')
		resul[0] = '0';
	else if (size == 0 && resul[1])
		resul[0] = '-';
	return (resul);
}
