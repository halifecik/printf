NAME = libftprintf.a

SRC_DIR = src

SRCS =	$(SRC_DIR)/ft_printf_utils.c\
		$(SRC_DIR)/ft_printf.c\

CC = cc
CFLAGS = -Wall -Wextra -Werror	

OBJS = $(SRCS:.c=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re
