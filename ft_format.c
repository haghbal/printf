/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 23:33:03 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/22 23:29:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int *cnt)
{
	int	i;
	int a;

	i = 0;
	a = 0;
	if (str == NULL)
	{
		a = ft_putstr("(null)", cnt);
		return (0);
	}
	while (str[i])
	{
		a = ft_putchar(str[i], cnt);
		i++;
	}
	return (a);
}

int	ft_format(char c, va_list args, int *cnt)
{
	int l;
	
	l = 0;
	if (c == 's')
		l = ft_putstr((va_arg(args, char *)), cnt);
	else if (c == 'c')
		l = ft_putchar((va_arg(args, int)), cnt);
	else if (c == 'd' || c == 'i')
		l = print_d_i((va_arg(args, int)), cnt);
	else if (c == 'p')
	{
		l = ft_putstr("0x", cnt);
		l = print_adresse(va_arg(args, unsigned long), cnt);
	}
	else if (c == 'u')
		l = print_nbr((va_arg(args, unsigned int)), 10, 1, cnt);
	else if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			l = print_nbr((va_arg(args, unsigned int)), 16, 1, cnt);
		else if (c == 'X')
			l = print_nbr((va_arg(args, unsigned int)), 16, 2, cnt);
	}
	else
		l = ft_putchar(c, cnt);
	return (l);
}
