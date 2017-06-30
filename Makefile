#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tettouat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/10 18:07:16 by tettouat          #+#    #+#              #
#    Updated: 2014/07/10 18:07:23 by tettouat         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = YOLO

all: $(NAME)

$(NAME):
	make -C libft/
	make -C nm/
	cp nm/ft_nm ft_nm
	make -C otool/
	cp otool/ft_otool ft_otool

clean:
	make -C libft/ clean
	make -C nm/ clean
	make -C otool/ clean

fclean:
	make -C libft/ fclean
	make -C nm/ fclean
	make -C otool/ fclean
	rm -f ft_nm
	rm -f ft_otool

re: fclean all

.PHONY: all clean fclean re