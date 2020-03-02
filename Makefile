# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nabbassi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/20 16:33:01 by nabbassi          #+#    #+#              #
#    Updated: 2020/03/02 16:18:26 by nabbassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OUT = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS) -I
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)

test:
	gcc libft.a .test.c

clean:
		/bin/rm -f $(OUT)

fclean: clean
		/bin/rm -f $(NAME)	

re: fclean all
