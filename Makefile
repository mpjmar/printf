# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maria-j2 <maria-j2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 17:29:26 by maria-j2          #+#    #+#              #
#    Updated: 2025/06/05 17:34:10 by maria-j2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the file
NAME = libftprintf.a

# Compiler and compilation flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

# Create library and delete files
AR = ar rcs 
RM = rm -f

# Source files and object files
SRC = ft_printf.c ft_putchar_pf.c ft_putnbr_pf.c ft_putptr_pf.c ft_putstr_pf.c ft_putunbr_pf.c 

OBJS = $(SRC:.c=.o)

# Header file
INCLUDE = ft_printf.h

# Indicates that everything to the right are commands and not files
.PHONY: all clean fclean re 

# Default rule that compiles everything
# target : dependencies
#  commands
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Compile .c files to .o files
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

# Rule to delete all created object files
clean:
	$(RM) $(OBJS)

# Delete all .o and .a files
fclean: clean
	$(RM) $(NAME)

re: fclean all