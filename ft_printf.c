/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:46:26 by namatias          #+#    #+#             */
/*   Updated: 2025/08/13 20:30:20 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_arg(const char c, va_list ap)
{
	if (c == 'c')
		return (ft_put_c(va_arg(ap, int)));
	if (c == 's')
		return (ft_put_s(va_arg(ap, char *)));
	// if (c == 'p')
	// 	return (0);
	// if (c == 'd')
	// 	return (0);
	if ((c == 'i') || (c == 'u'))
		return (ft_put_nbr(va_arg(ap, int)));
	// if (c == 'x')
	// 	return (0);
	// if (c == 'X')
	// 	return (0);
	if (c == '%')
		return (ft_put_c('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count = count + ft_arg(format[i], ap);
		}	
		else
			count = count + ft_put_c(format[i]);
		i++;
	}
	if (count < 0)
		return (-1);
	return (count);
}
