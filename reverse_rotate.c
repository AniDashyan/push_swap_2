#include "push_swap.h"

void	reverse_rotate(t_stack **top)
{
	t_stack	*tail;
	t_stack	*tmp1;
	t_stack	*tmp;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	tail = ft_lstlast(*top);
	tmp = ft_lstseclast(*top);
	tmp->next = NULL;
	tmp->pos = tail->pos;
	tmp1 = *top;
	tail->next = *top;
	*top = tail;
	while (tmp1->next)
	{
		tmp1->pos += 1;
		tmp1 = tmp1->next;
	}
	(*top)->pos = 0;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(&a);
	rrb(&b);
	write(1, "rrr\n", 4);
}
