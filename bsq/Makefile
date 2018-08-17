# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hadolfss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/11 20:35:08 by hadolfss          #+#    #+#              #
#    Updated: 2018/07/11 22:08:24 by fnilsson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = main.c solve.c printing.c

all: $(NAME)

$(NAME):
	gcc -Werror -Wall -Wextra $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
