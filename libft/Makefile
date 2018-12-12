# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 00:42:06 by gmadec       #+#   ##    ##    #+#        #
#    Updated: 2018/01/17 16:55:16 by gmadec      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INC_PATH = ./

SRC = ft_bzero.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlen.c \
	  ft_strrchr.c \
	  ft_strsub.c \
	  ft_strclr.c \
	  ft_strdel.c \
	  ft_memset.c

GREEN	=\033[0;32m

OBJ=$(SRC:.c=.o)

INC		= $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@printf "$(GREEN)Created $@\n"
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)


re: fclean all

.PHONY : clean fclean all re
