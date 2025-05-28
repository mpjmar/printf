/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:22:15 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/28 19:41:13 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

size_t	ft_get_size_pf(int n)
{
	size_t	size;
	long	num;

	num = n;
	if (num > 0)
		size = 0;
	else
	{
		size = 1;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}