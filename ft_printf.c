/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 23:33:44 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/24 15:26:48 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		i;
	int		count;
	int b;

	va_start(ptr, format);
	i = 0;
	count = 0;
	b = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			b = ft_format(format[i], ptr, &count);
			if (b != 1)
				return (-1);
		}
		else if (format[i] != '%')
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(ptr);
	return (count);
}

// #include <stdio.h>
// #include <limits.h>

// int main()
// {
//     // // unsigned int a = 1515;
//     // int i = ft_printf("Hello %s\n", "John");
//     // printf("-------\n");
//     // int j = printf("Hello %s\n", "John");
//     // printf("%d\n%d\n", i, j);
// 	// int *p = NULL;
// 	int x = ft_printf("%p\n", "gshhd");
// 	printf("%d", x);
// }