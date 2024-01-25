##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## Function for putting chars
##

SRC =	lib/my/mini_printf.c 		\
	lib/my/my_digit_to_str.c 	\
	lib/my/my_getnbr.c 		\
	lib/my/my_long_to_string.c 	\
	lib/my/my_put_nbr.c 		\
	lib/my/my_putchar.c 		\
	lib/my/my_putstr.c 		\
	lib/my/my_strcat.c 		\
	lib/my/my_strcmp.c 		\
	lib/my/my_strcpy.c 		\
	lib/my/my_strlen.c 		\
	lib/my/my_strlen.c 		\
	lib/my/my_strncpy.c 		\
	lib/my/my_strdup.c		\
	src/hash.c 			\
	src/insert.c			\
	src/delete.c			\
	src/dump.c			\
	src/search.c			\
	src/utils.c

OBJ = $(SRC:.c=.o)

HEADER_N = my.h

RM = rm -f

LIB_N = libhashtable.a

all: $(LIB_N)

$(LIB_N): $(OBJ)
	gcc -c $(OBJ)
	ar rc $(LIB_N) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
