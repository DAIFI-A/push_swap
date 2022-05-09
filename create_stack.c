#include<push_swap.h>

t_stack *creat_node(void)
{
    t_stack *head;

    head = (t_stack *)malloc(sizeof(t_stack));
    head->deff = 1;
    head->num = 0;
    head->next = NULL;
    return (head);
}

t_stack *stack_fillin(int argc, char **argv)
{
    int     i;
    t_stack *head;
    t_stack *tmp;

    i = 1;
    head = creat_node();
    tmp = head;
    while(i < argc)
    {
        tmp->num = ft_atoi(argv[i]);
        if (i < argc - 1)
        {
            tmp->next = creat_node();
            tmp = tmp->next;
            tmp->deff = 1;
        }
        i++;
    }
    return(head);
}

int main(int argc, char **argv)
{
    t_stack	*stack1;
	t_stack	*stack2;
    int     len;

    if (!(stack1 = stack_fillin(argc, argv)))
    {
        write(1, "error", 6);
        return 0;
    }
    len = stack_len(stack1);
    stack2 = NULL;
    return 0;
}
