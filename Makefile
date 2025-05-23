# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 17:29:26 by maria-j2          #+#    #+#              #
#    Updated: 2025/05/23 19:40:22 by maria-j2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the file
NAME = ft_printf 

# Compiler and compilation flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

# Delete files
RM = rm -f

# Source files and object files
SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c 

OBJS = $(SRC:.c=.o)

# Header file
INCLUDE = libprintf.h

# Indicates that everything to the right are commands and not files
.PHONY: all clean fclean re 

# Default rule that compiles everything
# target : dependencies
#  commands
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

# Compile .c files to .o files
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

# Rule to delete all created object files
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

# Delete all .o and .a files
fclean: clean
	$(RM) $(NAME)

re: fclean all