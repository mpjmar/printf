/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:08:45 by maria-j2          #+#    #+#             */
/*   Updated: 2025/06/02 20:07:50 by maria-j2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdlib.h> //QUITAR DESPUES!!!
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *s);
int		ft_putnbr_pf(int n, int base, char c);
int		ft_putunbr_pf(unsigned long n, int base, char c);
int		ft_putptr_pf(void	*p, int base, char c);

#endif