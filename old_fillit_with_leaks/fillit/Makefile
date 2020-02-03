# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquill <aquill@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/19 20:16:42 by aquill            #+#    #+#              #
#    Updated: 2020/02/02 13:52:43 by aquill           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c matrices.c solver.c grid.c read_input.c tetro_checker.c sq_free.c

OBJ = $(SRC:.c=.o)

LIBFT = includes/libft.a

HEADER = -c -I lib_fillit.h

all: $(NAME)

$(OBJ): %.o: %.c
		@gcc -c -Wall -Werror -Wextra -g -I includes/ $< -o $@

$(LIBFT):
	@make -C includes

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIBFT) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
	@make -C includes clean

fclean: clean
	/bin/rm -f $(NAME)
	@make -C includes fclean

re: fclean all
