NAME = libftprintf.a

SRCS = ft_printf.c			\
		my_putstr.c			\
		format_checker.c	\
		my_puthexa.c		\
		my_putnbr.c			\
		my_unsigned.c		\
		my_putptr.c			\
		my_putchar.c

OBJS = $(SRCS:.c=.o)

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libftprintf.a

re: fclean all
