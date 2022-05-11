#include<stdlib.h>
#include<unistd.h>
#include"libft/libft.h"

typedef struct stack
{
    int     num;
    int     deff;
    struct  stack     *next;
}   t_stack;


int sa_b(t_stack **head);
int ra_b(t_stack **head);
int rra_b(t_stack **head);
int pa_b(t_stack **reciver_head, t_stack **origin_head);
int ss(t_stack **stack_a, t_stack **stack_b);
int rrr(t_stack **stack_a, t_stack **stack_b);
int rr(t_stack **stack_a, t_stack **stack_b);
int stack_len(t_stack *stack);
int swap(int *a, int *b);
void    sort_3(t_stack **val);
void	sort_4(t_stack *a, t_stack *b);
void    sort_3_sa_and_rra(t_stack **a);
void    sort_3_sa_and_ra(t_stack **a);
void    sort_3_sa(t_stack **a);
void    sort_3_ra(t_stack **a);
void    sort_3_rra(t_stack **a);
void     short_sort(t_stack **stack, int len);
void    sort_a_in_b(t_stack *a, int min, int len);
int     push_first_2_elements(t_stack **a, t_stack **b, int i);
void	pa_and_write(t_stack **a, t_stack **b);
void	pb_and_write(t_stack **a, t_stack **b);
int smallest_num(t_stack *stack);
void    sort_five(t_stack *a , t_stack *b);
t_stack *creat_node(void);
t_stack *stack_fillin(int argc, char **argv);
int main(int argc, char **argv);
