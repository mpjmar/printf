/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:08:45 by maria-j2          #+#    #+#             */
/*   Updated: 2025/05/26 18:33:02 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h> //QUITAR DESPUES!!!
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>


int		ft_putchar_pf(char c);
int		ft_putnbr_pf(int n);
int		ft_putstr_pf(char *s);
int		ft_putunbr_pf(unsigned int n);
char	*ft_itoa_pf(int n);


#endif