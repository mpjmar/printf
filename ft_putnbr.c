/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:44:12 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/22 17:23:24 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putnbr(int n)
{
	char	*s;
	size_t	i;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	i = 0;
	s = ft_itoa(n);
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar(s[i], fd);
		i++;
	}
	free(s);
}