SRCS = 	big_sort.c\
 		check_arg.c\
 		cmd_write.c\
 		cmd.c\
 		cmd1_write.c\
 		cmd1.c\
 		create_stack.c\
 		sort_five.c\
 		utils1.c\
 		utils2.c\
		utils3.c\

BONUS = checker.c\
		ft_strncmp.c\
		moves1_bonus.c\
		moves2_bonus.c\
		stack.c\
		utils_bonus.c\
		utils2_bonus.c\
		utils3_bonus.c\

BODIR = bonus
SRCDIR = mand
OBJS_DIR = objs/
OBJS_BON = objbon/
CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
BONAME = checker
LIB = libft/libft.a
OBJS := $(SRCS:%.c=$(OBJS_DIR)/%.o)
BO := $(BONUS:%.c=$(OBJS_BON)/%.o)


all: $(NAME)

$(OBJS_DIR):
			@mkdir $@

$(OBJS_BON):
			@mkdir $@

$(OBJS_DIR)/%.o: $(SRCDIR)/%.c | $(OBJS_DIR)
			$(CC) -c $< -o $@

$(OBJS_BON)/%.o: $(BODIR)/%.c | $(OBJS_BON)
			$(CC) -c $< -o $@

bonus : ${BO} ${LIB}
	@${CC} ${CFLAGS} $^ -o $(BONAME) $(LIB)

$(NAME): $(LIB) $(OBJS)
			$(CC) $(CFLAGS) $^ -o $(NAME) $(LIB)

$(LIB) :
		make -C libft

clean:
			@rm -rf $(OBJS_DIR) ${OBJS_BON}
			make clean -C libft

fclean:	clean
			@rm -rf  $(NAME)  ${BONAME}
			make fclean -C libft

re: fclean all

-include $(DEPS)

.PHONY:	clean re fclean all
