/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:44:12 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/28 18:16:41 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putnbr_pf(int n)
{
	char	*s;
	size_t	i;

	if (n == -2147483648)
		return (ft_putstr_pf("-2147483648"));
	i = 0;
	s = ft_itoa_pf(n);
	if (!s)
		return (0);
	while (s[i])
		ft_putchar_pf(s[i++]);
	free(s);
	return (i);
}
