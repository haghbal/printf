NAME = libftprintf.a
SRC = ft_format.c ft_printf.c ft_putchar.c print_nbr.c print_adresse.c \
	print_d_i.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
HEADRE = ft_printf.h

%.o: %.c $(HEADRE)
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -cr $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean