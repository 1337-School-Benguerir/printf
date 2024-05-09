NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_printhex.c \
		ft_putchar.c \
		ft_putsigned.c \
		ft_putstr.c \
		ft_putunsigned.c \
       
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		 rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re