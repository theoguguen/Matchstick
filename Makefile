##
## EPITECH PROJECT, 2021
## B-CPE-200-REN-2-1-matchstick-theo.guguen
## File description:
## Makefile
##

SRCDIR	=	src/

SRC	=	$(SRCDIR)run.c \
		$(SRCDIR)matchstick.c \
		$(SRCDIR)my_print.c \
		$(SRCDIR)error.c \
		$(SRCDIR)help.c \
		$(SRCDIR)check.c \
		$(SRCDIR)load2d.c \
		$(SRCDIR)mapgen.c \
		$(SRCDIR)mapgen_line.c \
		$(SRCDIR)my_putchar.c \
		$(SRCDIR)my_putstr.c \
		$(SRCDIR)my_strncpy.c \
		$(SRCDIR)my_getnbr.c \
		$(SRCDIR)my_putnbr.c \
		$(SRCDIR)my_strcmp.c \
		$(SRCDIR)my_atoi.c \
		$(SRCDIR)my_str_isnum.c \
		$(SRCDIR)my_ai.c \
		$(SRCDIR)free_tab.c	\
		$(SRCDIR)update.c	\
		$(SRCDIR)line.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-Wall -Wextra -W -I includes -g

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

debug: CFLAGS += -g
debug: re

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all