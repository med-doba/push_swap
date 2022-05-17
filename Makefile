NAME= push_swap

CC= gcc

CFLAGS= -Wall -Wextra -Werror

SRC= push_swap.c utils/ft_calculate.c utils/ft_double.c utils/ft_free_all.c

INC= push_swap.h

OBJ= $(SRC:%.c=%.o)

LIBFT= libft/libft.a

PRINTF= ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJ)
	@$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(OBJ) -o $(NAME)

$(LIBFT):
	@make -C libft

$(PRINTF):
	@make -C ft_printf

clean:
	@rm -rf $(OBJ)
	@make clean -C libft
	@make clean -C ft_printf

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C libft
	@make fclean -C ft_printf

re: fclean all
