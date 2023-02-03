NAME = ft_printf.a
HEADER = ft_printf.h
SRC = 	ft_dec_to_hex.c ft_itoa.c ft_putnbr_fd.c ft_putstr.c ft_strdup.c ft_strlen.c ft_to_upper.c \
		ft_printf.c ft_printf_c.c ft_printf_di.c ft_printf_p.c ft_printf_s.c ft_printf_u.c ft_printf_x.c\
		ft_printf_X.c
OBJ = *.o

CC = gcc

CFLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -I$(HEADER) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus