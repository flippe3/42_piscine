#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 14:15:41 by fnilsson          #+#    #+#              #
#    Updated: 2018/07/03 23:09:45 by fnilsson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

PREFIX = ft
NAME = lib$(PREFIX).a
INC_DIR = includes
SRC_DIR = srcs

$(NAME): all

all:
	gcc -Werror -Wall -Wextra -c $(SRC_DIR)/$(PREFIX)_*.c -I$(INC_DIR)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all