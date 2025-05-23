/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:15:40 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/23 17:26:05 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

/*
static size_t	get_size(int n)
{
	size_t	size;
	long	num;

	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

static char	*ft_itoa(int n)
{
	long	num;
	char	*resul;
	size_t	size;

	num = n;
	size = get_size(n);
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
	return (resul);
}
*/

int	ft_putunbr(unsigned int n)
{
	char	*s;
	size_t	i;

	i = 0;
	s = ft_itoa(n);
	if (!s)
		return ;
	while (s[i])
		ft_putchar(s[i++]);
	free(s);
	return (i);
}
