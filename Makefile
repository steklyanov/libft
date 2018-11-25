# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmraz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 15:11:39 by mmraz             #+#    #+#              #
#    Updated: 2018/11/21 15:32:54 by mmraz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft
SRC=*.c

all: create

create:
	gcc -o $(NAME)  $(SRC)
clean:
	/bin/rm -f *.o

fclean: 
	clean
	/bin/rm -f $(NAME)

re: 
	fclean all
