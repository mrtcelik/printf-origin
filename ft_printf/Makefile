# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mucelik <mucelik@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 17:07:44 by mucelik           #+#    #+#              #
#    Updated: 2023/02/12 17:08:23 by mucelik          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_*.c;

OBJ = ft_*.o

all: ${NAME}

${NAME}:
	@gcc ${FLAGS} -c ${SRC}
	@ar -rcs ${NAME} ${OBJ}

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re