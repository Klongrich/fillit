# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpezeshk <bpezeshk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/17 14:12:17 by bpezeshk          #+#    #+#              #
#    Updated: 2017/01/19 00:43:44 by bpezeshk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCDIR = ./srcs

MAIN = main.o

OBJ = $(MAIN) filein.o pieces_init.o

FLAGS = -Wall -Wextra -Werror

LIBDIR = ./libft

LIB = libft.a

HEADERS = $(SRCDIR)/fillit.h $(LIBDIR)/libft.h

all: $(NAME)

$(NAME): $(LIBDIR)/$(LIB) $(OBJ)
	@gcc $(OBJ) $(LIBDIR)/$(LIB) -o $(NAME)

%.o: $(SRCDIR)/%.c
	@gcc $(FLAGS) $< -c -o $@

$(LIBDIR)/$(LIB):
	@cd libft && make

clean:
	@rm -f $(OBJ)
	@cd libft && make clean

fclean: clean
	@rm -f $(NAME)
	@cd libft && make fclean

re: fclean all
