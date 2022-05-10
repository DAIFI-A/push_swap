CFILES = short_stack.c sort_five.c create_stack.c cmd.c utils1.c
OFILES = short_stack.o sort_five.o create_stack.o cmd.o utils1.o
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
