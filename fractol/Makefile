NAME = fractol

SRC = 	main.c \
		ft_arg_error.c \
		ft_burning_hub.c \
		ft_check_error.c \
		ft_init.c \
		ft_julia_hub.c \
		ft_mandel_hub.c \

OBJ = $(patsubst %.c, %.o, $(SRC))

CFLAGS = -Wall -Wextra -Werror -


all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	gcc $(OBJ) -I /usr/X11/include -g -L/usr/X11/lib -lX11 -lmlx -lXext -L libft -lft -o $(NAME)

proper: $(NAME) clean

clean:
	rm -f $(OBJ)
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a

re: fclean all

%.o: %.c
	gcc -c $< -o $@
