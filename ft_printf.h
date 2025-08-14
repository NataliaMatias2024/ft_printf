/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:46:45 by namatias          #+#    #+#             */
/*   Updated: 2025/08/13 17:47:11 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_put_p(void *c);
int		ft_put_c(char c);
int		ft_put_s(char *c);
int		ft_put_nbr(int c);
int		ft_put_x(unsigned int c);
int		ft_put_nbr_u(unsigned int c);
int		ft_printf(const char *format, ...);
int		ft_put_X(unsigned int c, int is_uppercase);

#endif
