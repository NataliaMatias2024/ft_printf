/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:33:38 by namatias          #+#    #+#             */
/*   Updated: 2025/08/16 09:14:13 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(int c)
{
	long	nbr;
	int		i;

	i = 0;
	nbr = c;
	if (nbr < 0)
	{
		ft_put_c ('-');
		i++;
		nbr *= -1;
	}
	if (nbr > 9)
		i = i + ft_put_nbr(nbr / 10);
	i = i + ft_put_c ((nbr % 10) + '0');
	return (i);
}
