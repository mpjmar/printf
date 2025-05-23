/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:15:40 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/23 17:56:17 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putunbr(unsigned int n)
{
	char	*s;
	size_t	i;

	i = 0;
	s = ft_itoa(n);
	if (!s)
		return (0);
	while (s[i])
		ft_putchar(s[i++]);
	free(s);
	return (i);
}
