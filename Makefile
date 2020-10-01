# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 13:45:32 by asultanb          #+#    #+#              #
#    Updated: 2020/09/28 15:28:13 by asultanb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	cub3D
CFLAGS	=	-Wall -Werror -Wextra -g
FILES	=	main
CC		=	gcc

SRCS	=	$(addprefix srcs/, $(addsuffix .c, $(FILES)))
OBJS	=	$(addprefix objs/, $(addsuffix .o, $(FILES)))

LIBLINK	=	-Llibft -lft
MLXLINK	=	-Lmlx -lmlx -framework OpenGL -framework AppKit

.PHONY: all clean fclean re bonus libft libmlx

all: $(NAME)

$(NAME): libft libmlx $(OBJS)
	$(CC) $(CFLAGS) $(LIBLINK) $(MLXLINK) $(OBJS) -o $@

libft:
	make -C libft/

libmlx:
	make -C mlx/

$(OBJS): objs/%.o: srcs/%.c
	/bin/mkdir -p objs
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -rf objs
	/bin/rm -f mlx/*.o
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f mlx/libmlx.a
	make -C libft/ fclean

re: fclean all
