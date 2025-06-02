/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:44:22 by maria-j2          #+#    #+#             */
/*   Updated: 2025/06/02 20:06:06 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libprintf.h"

int	ft_putptr_pf(void	*p, int base, char c)
{
	int	counter;

	counter = write(1, "0x", 2);
	counter += ft_putunbr_pf((unsigned long)p, base, c);
	return (counter);
}
