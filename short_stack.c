#include "push_swap.h"

void	sort_3_sa_and_rra(t_stack **a)
{
	sa_b(a);
	rra_b(a);
	write(1, "sa\n", 3);
	write(1, "rra\n", 4);
}

void	sort_3_sa_and_ra(t_stack **a)
{
	sa_b(a);
	ra_b(a);
	write(1, "sa\n", 3);
	write(1, "ra\n", 3);
}

void	pa_and_write(t_stack **a, t_stack **b)
{
	pa_b(a, b);
	write(1, "pa\n", 3);
}

void	pb_and_write(t_stack **a, t_stack **b)
{
	pa_b(b, a);
	write(1, "pb\n", 3);
}

void	sort_3_sa(t_stack **a)
{
	sa_b(a);
	write(1, "sa\n", 3);
}

void	sort_3_ra(t_stack **a)
{
	ra_b(a);
	write(1, "ra\n", 3);
}

void	sort_3_rra(t_stack **a)
{
	rra_b(a);
	write(1, "rra\n", 4);
}

void	sort_3(t_stack **val)
{
    int f;
    int m;
    int b;
    int i;

    f = (*val)->num;
    m = (*val)->next->num;
    b = (*val)->next->next->num;
    i = 0;
    if (f > m && m < b && b > f)
        sort_3_sa(val);
    if (f > m && m > b && b < f)
		sort_3_sa_and_rra(val);
	if (f > m && m < b && b < f)
		sort_3_ra(val);
	if (f < m && m > b && b > f)
		sort_3_sa_and_ra(val);
	if (f < m && m > b && b < f)
		sort_3_rra(val);
}
