NAME= push_swap

CC= gcc

CFLAGS= -Wall -Wextra -Werror

SRC= push_swap.c utils/ft_calculate.c utils/ft_double.c \
	utils/ft_free_all.c utils/moves00.c utils/ft_node_create.c \
	utils/ft_lstsize_ps.c utils/ft_lstlast_ps.c utils/ft_lstdelone_ps.c \
	utils/ft_lstclear_ps.c utils/ft_lstadd_front_ps.c utils/ft_lstadd_back_ps.c

INC= push_swap.h

OBJ= $(SRC:%.c=%.o)

LIBFT= libft/libft.a

PRINTF= ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

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
