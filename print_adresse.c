/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adresse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:37:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/22 22:48:49 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_adresse(unsigned long nb, int *cnt)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	int l;
	if (nb < 16)
		l = ft_putchar(symbols[nb], cnt);
	else
	{
		l = print_adresse((nb / 16), cnt);
		l = print_adresse((nb % 16), cnt);
	}
	return (l);
}
