# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <namatias@42sp.org.br>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/09 15:29:38 by namatias          #+#    #+#              #
#    Updated: 2025/08/16 10:01:13 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#									Variables						           #
################################################################################

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

FILESC = ft_printf.c ft_put_c.c ft_put_nbr.c ft_put_p.c ft_put_s.c \
		 ft_put_x.c ft_put_x_upper.c ft_put_nbr_u.c

FILESO = $(FILESC:.c=.o)

################################################################################
#									Functions        			       		   #
################################################################################

all: $(NAME)

$(NAME): $(FILESO)
	ar crs $(NAME) $(FILESO)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(FILESO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re