/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:15:40 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/22 17:23:39 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putunbr(unsigned int n)
{
	char	*s;
	size_t	i;
	
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