##
## EPITECH PROJECT, 2020
## navy
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/display.c	\
		src/boat.c	\
		src/get_boat_pos.c	\
		src/send_attack.c	\
		src/build.c	\
		src/connection.c	\
		src/players_actions.c	\
		src/handle_players.c	\
		src/get_attack.c	\
		src/error.c	\
		src/error_boat.c	\
		src/game.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

CPPFLAGS=	-I include/

all	:	$(NAME)

$(NAME) :	$(SRC)
	cd lib/my && make all
	gcc -o $(NAME) $(SRC) -L lib/my/ -lmy $(CPPFLAGS)

VAL :
	cd lib/my && make all
	gcc -o $(NAME) $(SRC) -L lib/my/ -lmy $(CPPFLAGS) -g3

clean	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re	:fclean all
