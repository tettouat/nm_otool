# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/10 18:04:11 by tettouat          #+#    #+#              #
#    Updated: 2014/07/10 18:10:07 by tettouat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_nm

LIB = ../libft/libft.a

CFLAG = -Wall -Wextra -Werror

SRCC = ft_error.c ft_get_sym_tab.c ft_get_type.c ft_nm.c ft_order.c\
		ft_printpad.c ft_xlongtoa.c main.c

SRCO = $(SRCC:.c=.o)

all: $(NAME)

$(NAME): $(SRCO) $(LIB)
	gcc $(SRCO) $(LIB) -o $(NAME) $(CFLAG)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re