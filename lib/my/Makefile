##
## EPITECH PROJECT, 2020
## makefile
## File description:
## project
##

SRC	=	my_find_prime_sup.c	\
		my_putchar.c	\
		my_showmem.c	\
		my_strcat.c     \
		my_str_islower.c	\
		my_strlen.c	\
		my_strncpy.c	\
		my_getnbr.c	\
		my_put_nbr.c	\
		my_showstr.c	\
		my_strcmp.c	\
		my_str_isnum.c	\
		my_strlowcase.c	\
		my_strstr.c	\
		my_compute_power_rec.c	\
		my_isneg.c	\
		my_putstr.c	\
		my_sort_int_array.c	\
		my_strcpy.c	\
		my_str_isprintable.c	\
		my_strncat.c	\
		my_strupcase.c	\
		my_compute_square_root.c	\
		my_is_prime.c	\
		my_revstr.c	\
		my_strcapitalize.c	\
		my_str_isalpha.c	\
		my_str_isupper.c	\
		my_strncmp.c	\
		my_swap.c	\
		my_printf.c	\
		my_unsignednbr.c	\
		my_unoctal.c	\
		my_unbinary.c	\
		my_unhexa.c	\
		my_uncaphexa.c	\
		my_showbackslash.c	\

OBJ  =	$(SRC:.c=.o)

NAME =	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include
	cp libmy.a ../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

clean_o: fclean all
	rm -f *~

