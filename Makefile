NAME = libftprintf.a
SRC = 	ft_printf.c ft_dec_to_hex.c ft_itoa.c ft_putnbr_fd.c ft_putstr_fd.c ft_strdup.c ft_strlen.c\
		ft_to_upper.c ft_printf_c.c ft_printf_di.c ft_printf_p.c ft_printf_s.c ft_printf_u.c ft_printf_x.c\
		ft_x.c
OBJ = *.o

CC = gcc

CFLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re