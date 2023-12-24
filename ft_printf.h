/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 23:44:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/22 22:50:10 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int	ft_format(const char c, va_list args, int *cnt);
int	ft_putchar(int c, int *i);
int	ft_putstr(char *str, int *cnt);
int	print_nbr(unsigned int nb, unsigned int base, int indice, int *cnt);
int	print_adresse(unsigned long nb, int *cnt);
int print_d_i(long nb, int *cnt);

#endif
