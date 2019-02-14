NAME = libft.a
SOURCE = ./ft_*.c
OBJ = ./ft_*.o
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@ gcc $(FLAG) -c $(SOURCE)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)

clean:
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f $(NAME)

re: fclean all
