CFILES = sort_five.c create_stack.c cmd.c utils1.c cmd_write.c cmd1_write.c cmd1.c big_sort.c check_arg.c checker.c
OFILES = sort_five.o create_stack.o cmd.o utils1.o cmd_write.o cmd1_write.o cmd1.o big_sort.o check_arg.o checker.o
BOFILE = checker.o sort_five.c create_stack.c cmd.c utils1.c cmd_write.c cmd1_write.c cmd1.c big_sort.c check_arg.c
CFILE = checker.c sort_five.c create_stack.c cmd.c utils1.c cmd_write.c cmd1_write.c cmd1.c big_sort.c check_arg.c
CC = cc
INC = push_swap.h
LIB = libft/libft.a
W = -c -Wall -Werror -Wextra
NAME = push_swap

${NAME} : ${LIB} ${OFILES} ${INC}
	$(CC) $(OFILES) $(LIB) -o $(NAME)

$(LIB) :
	make -C libft

%.o : %.c $(INC)
	$(CC) $(W) -c $< -o $@

clean :
	@rm -f ${OFILES}
fclean : clean
	@rm -f ${NAME}
re : fclean all
all : ${NAME}
.PHONY:	 clean all fclean re
