NAME= push_swap

CC= gcc

CFLAGS= -Wall -Wextra -Werror

SRC= man/push_swap.c man/utils/ft_calculate.c man/utils/ft_double.c \
	man/utils/ft_free_all.c man/node/moves00.c man/node/ft_node_create.c \
	man/node/ft_lstsize_ps.c man/node/ft_lstlast_ps.c man/node/ft_lstdelone_ps.c \
	man/node/ft_lstclear_ps.c man/node/ft_lstadd_front_ps.c man/node/ft_lstadd_back_ps.c \
	man/node/ft_pop.c man/node/ft_push.c man/utils/ft_order.c man/moves/ft_sa.c man/moves/ft_sb.c \
	man/moves/ft_pb.c man/moves/ft_pa.c man/moves/ft_ss.c man/moves/ft_ra.c man/moves/ft_rb.c man/moves/ft_rr.c \
	man/moves/ft_rra.c man/moves/ft_rrb.c man/utils/ft_min_max.c \
	man/moves/ft_rrr.c man/algorithme/algo00.c man/algorithme/algo01.c man/algorithme/algo02.c man/algorithme/algo03.c \
	man/ft_sort.c

SRC_BONUS= bonus/push_swap_bonus.c bonus/utils/ft_calculate.c bonus/utils/ft_double.c \
	bonus/utils/ft_free_all.c bonus/node/moves00.c bonus/node/ft_node_create.c \
	bonus/node/ft_lstsize_ps.c bonus/node/ft_lstlast_ps.c bonus/node/ft_lstdelone_ps.c \
	bonus/node/ft_lstclear_ps.c bonus/node/ft_lstadd_front_ps.c bonus/node/ft_lstadd_back_ps.c \
	bonus/node/ft_pop.c bonus/node/ft_push.c bonus/utils/ft_order.c bonus/moves/ft_sa.c bonus/moves/ft_sb.c \
	bonus/moves/ft_pb.c bonus/moves/ft_pa.c bonus/moves/ft_ss.c bonus/moves/ft_ra.c bonus/moves/ft_rb.c bonus/moves/ft_rr.c \
	bonus/moves/ft_rra.c bonus/moves/ft_rrb.c bonus/utils/ft_min_max.c \
	bonus/moves/ft_rrr.c bonus/algorithme/algo00.c bonus/algorithme/algo01.c bonus/algorithme/algo02.c bonus/algorithme/algo03.c \
	bonus/ft_sort_bonus.c bonus/ft_detect.c bonus/ft_strcmp.c GNL/get_next_line.c\
	GNL/get_next_line_utils.c

INC= push_swap.h

OBJ= $(SRC:%.c=%.o)

OBJ_BONUS= $(SRC_BONUS:%.c=%.o)

LIBFT= libft/libft.a

PRINTF= ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	@make -C libft

$(PRINTF):
	@make -C ft_printf

bonus:$(LIBFT) $(PRINTF) $(OBJ_BONUS)
	@$(CC) $(CFLAGS) $(OBJ_BONUS) $(LIBFT) $(PRINTF) -o checker

clean:
	@rm -rf $(OBJ) $(OBJ_BONUS)
	@make clean -C ft_printf
	@make clean -C libft

fclean: clean
	@rm -rf $(NAME) checker
	@make fclean -C libft
	@make fclean -C ft_printf

re: fclean all
