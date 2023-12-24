/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:36:39 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/22 22:49:22 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d_i(long nb, int *cnt)
{
	int l;
	if (nb < 0)
	{
		l = ft_putchar('-', cnt);
		l = print_d_i(-nb, cnt);
	}
	else if (nb > 9)
	{
		l = print_d_i((nb / 10), cnt);
		l = print_d_i((nb % 10), cnt);
	}
	else
		l = ft_putchar(nb + 48, cnt);
	return (l);
}
