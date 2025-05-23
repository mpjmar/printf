/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:44:12 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/23 16:55:26 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putnbr(int n)
{
	char	*s;
	size_t	i;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	i = 0;
	s = ft_itoa(n);
	if (!s)
		return ;
	while (s[i])
		ft_putchar(s[i++]);
	free(s);
	return (i);
}