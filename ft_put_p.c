/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 01:35:59 by namatias          #+#    #+#             */
/*   Updated: 2025/08/15 01:35:59 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(void *c)
{
	int				i;
	unsigned long	adress;

	i = 0;
	if(!c)
	{
		i = i + ft_put_s("(nil)");
		return (i);
	}
	else
	{
		i = i + ft_put_s("0x");
		adress = (unsigned long)c;
		//i = i + ft_put_x(adress[])
	}
}