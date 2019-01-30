NAME: libft.a
SOURCE: ./ ft_*.c
OBJ: ./ ft_*.o

all:
	gcc -c $(SOURCE)
clean:

fclean: $(clean)

re: $(fclean)
