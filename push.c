#include "push_swap.h"

void	push(t_stack **src, t_stack **dest)
{	
	t_stack	*tmp;
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (*src == NULL)
	{
		ft_printf("stack is empty\n");
		return ;
	}
	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	tmp1 = *src;
	while (tmp1)
	{	
		(tmp1)->pos -= 1;
		tmp1 = tmp1->next;
	}
	ft_lstadd_front(dest, tmp);
	tmp2 = *dest;
	tmp2->pos = -1;
	while (tmp2)
	{
		tmp2->pos += 1;
		tmp2 = tmp2->next;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
