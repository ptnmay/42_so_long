NAME = so_long

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
HEADER = so_long.h
MLX_FLAGS = -LMLX -lMLX  -framework OpenGL -framework AppKit
RM = rm
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

MLX_PATH = MLX
MLX = $(MLX_PATH)/libmlx.a

SRC = filecheck.c check_five.c open_check.c srang_map.c check_wall.c ff_namtuam.c p_u_nee.c render.c zou.c me_e_mai.c kod_pum.c
#SRC = filecheck.c check_five.c open_check.c srang_map.c check_wall.c ff_namtuam.c p_u_nee.c me_e_mai.c
OBJ = $(SRC:.c=.o)
all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
		$(CC) $(MLX_FLAGS) $(OBJ) $(LIBFT) $(MLX) -o $(NAME)

#$(NAME) : $(LIBFT) $(OBJ)
#		$(CC) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT) :
			make -C $(LIBFT_PATH)


%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -IMLX -c $< -o $@

v: re
	valgrind --leak-check=full ./so_long mmm.ber

clean:
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(OBJ)

fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME)

re: fclean all
