NAME		= libftprintf.a
CC			= gcc
LIBFT = libft/libft.a

SRC_FILES	=	ft_printf.c ft_print_basics.c ft_print_ptr.c ft_print_unsigned.c ft_print_hex.c
OBJECTFILES := $(SRC_FILES:%.c=%.o)


all: $(NAME)
$(NAME): $(OBJECTFILES)
	make -C./libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJECTFILES)
CFLAGS = -Wall -Wextra -Werror
clean:
	rm -f $(OBJECTFILES)
	make -C./libft clean
fclean: clean
	rm -f $(NAME)
	make -C./libft fclean
re: fclean all	

