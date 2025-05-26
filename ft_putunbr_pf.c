/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:15:40 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/26 18:31:52 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putunbr_pf(unsigned int n)
{
	char	*s;
	size_t	i;

	i = 0;
	s = ft_itoa_pf(n);
	if (!s)
		return (0);
	while (s[i])
		ft_putchar_pf(s[i++]);
	free(s);
	return (i);
}
