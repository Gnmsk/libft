NAME = libft
SOURCE = ./ft_*.c
OBJ = ./ft_*.o
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@ gcc -c $(FLAG) $(SOURCE)
	@ ar rc $(NAME) $(OBJ)
	@ run lib
clean:
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f $(NAME)

re: fclean all
