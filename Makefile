CFLAGS 			=	-Wall -Wextra -Werror #-fsanitize=address
TARGET 			=	push_swap
SRCS_DIR 		=	./srcs
OBJS_DIR 		=	.
LIBFT_DIR		=	./libft
INCLUDES_DIRS	=	./includes $(LIBFT_DIR)
INCLUDES		=	$(addprefix -I,$(INCLUDES_DIRS))
LIBS			=	$(LIBFT_DIR)/libft.a
_SRCS 			=	push_swap.c \
					copy_strs.c \
					free_strs.c \
					strs_to_ints.c \
					sort_ints.c \
					is_int.c \
					count_arr.c \

OBJS_BONUS = $(patsubst %.c, $(OBJS_DIR)/%.o, $(_SRCS_BONUS))
	
OBJS = $(patsubst %.c, $(OBJS_DIR)/%.o, $(_SRCS))
SRCS = $(patsubst %, $(SRCS_DIR)/%, $(_SRCS))

.PHONY : all clean fclean re bonus test norminette

all: $(TARGET)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(TARGET)

re: fclean all

$(OBJS_DIR):
	@mkdir -p $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) -c $(CFLAGS) -o $@ $^ $(INCLUDES)

$(TARGET): $(LIBFT_DIR)/libft.a $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

$(LIBFT_DIR)/libft.a:
	$(MAKE) -C $(LIBFT_DIR)

bonus: $(TARGET)

test: re
	./$(TARGET) 4 3 2 1 | ./checker_Mac

norminette:
	-norminette $(SRCS) ft_printf.h
	-norminette $(LIBFT_DIR)
