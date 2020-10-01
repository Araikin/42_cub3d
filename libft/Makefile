# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/16 16:49:59 by asultanb          #+#    #+#              #
#    Updated: 2020/09/21 13:47:33 by asultanb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
FLAGS	=	-Wall -Werror -Wextra -I
INCL	=	libft.h

GNL		=	gnl/get_next_line

PRINTF	=	printf/csp_specifier printf/ft_printf printf/di_specifier \
			printf/f_specifier printf/helper_func printf/math_func \
			printf/ouxx_specifier printf/parse_format printf/set_params \
			printf/verify_params

FILES	=	ft_memset	ft_memcpy	ft_memccpy	ft_memmove	ft_memchr \
			ft_memcmp 	ft_calloc 	ft_bzero 	ft_strlen	ft_strlcpy \
			ft_strlcat	ft_strchr 	ft_strrchr 	ft_strnstr 	ft_strncmp \
			ft_strdup 	ft_atoi 	ft_tolower 	ft_toupper 	ft_itoa \
			ft_isalpha 	ft_isdigit 	ft_isalnum 	ft_isascii 	ft_isprint \
			ft_substr 	ft_strjoin 	ft_strtrim 	ft_split	ft_strmapi \
			ft_putchar_fd	ft_putstr_fd	ft_putendl_fd	ft_putnbr_fd \
			ft_putchar ft_putstr ft_strsub ft_strnew ft_strdel \
			$(GNL) $(PRINTF)

F_SRC	=	$(addsuffix .c, $(FILES))
F_OBJ	=	$(addsuffix .o, $(FILES))

BONUS	=	ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
			ft_lstdelone ft_lstiter ft_lstclear ft_lstmap \
			ft_lstprint_fd_bonus ft_lstfind_bonus ft_striteri_bonus \
			ft_itoa_base_bonus ft_islower_bonus ft_isupper_bonus ft_nbrlen_bonus \
			ft_countwords_bonus ft_strcmp_bonus ft_strnew_bonus

B_SRC	=	$(addsuffix .c, $(BONUS))
B_OBJ	=	$(addsuffix .o, $(BONUS))

all: $(NAME)

$(NAME): $(F_OBJ)
	@ar rcs $(NAME) $(F_OBJ)
	@ranlib	$(NAME)

bonus: $(NAME) $(B_OBJ)
	@ar rcs $(NAME) $(B_OBJ)
	@ranlib	$(NAME)

.c.o:
	@gcc $(FLAGS) $(INCL) -c $< -o $(<:.c=.o)

clean:
	@/bin/rm -f $(F_OBJ) $(B_OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

rebonus: fclean bonus
