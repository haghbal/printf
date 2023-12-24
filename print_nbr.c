/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 23:39:05 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/22 23:23:49 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(unsigned int nb, unsigned int base, int indice, int *cnt)
{
	char	*symbols;

	symbols = 0;
	int l;
	l = 0;
	if (indice == 1)
		symbols = "0123456789abcdef";
	else if (indice == 2)
		symbols = "0123456789ABCDEF";
	if (nb < 0)
	{
		l = ft_putchar('-', cnt);
		nb = -nb;
	}
	else if (nb < base)
		l = ft_putchar(symbols[nb], cnt);
	else
	{
		l = print_nbr((nb / base), base, indice, cnt);
		l = print_nbr((nb % base), base, indice, cnt);
	}
	return (l);
}
