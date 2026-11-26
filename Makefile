NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS_DIR = srcs
OBJS_DIR = objs
INCS_DIR = includes

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

INCLUDES = -I $(INCS_DIR) -I $(LIBFT_DIR) -I $(PRINTF_DIR)

SRCS = main.c raw_moves.c push.c reverse.c rotate.c swap.c error.c parse_flag.c parse_numbers.c check.c				debug.c

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

all: libs $(NAME)

libs:
	@$(MAKE) --no-print-directory -C $(LIBFT_DIR)
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR)

$(LIBFT):
	@$(MAKE) --no-print-directory -C $(LIBFT_DIR)

$(PRINTF):
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) $(LIBFT) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCS_DIR)/push_swap.h | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(RM) -r $(OBJS_DIR)
	@$(MAKE) --no-print-directory -C $(LIBFT_DIR) clean
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) --no-print-directory -C $(LIBFT_DIR) fclean
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all libs clean fclean re
