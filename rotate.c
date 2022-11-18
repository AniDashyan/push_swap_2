#include "push_swap.h"

void	rotate(t_stack **top)
{
	t_stack	*tail;
	t_stack	*tmp;
	t_stack	*tmp1;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	tmp = *top;
	*top = (*top)->next;
	(*top)->pos -= 1;
	tmp1 = (*top)->next;
	while (tmp1->next)
	{
		tmp1->pos -= 1;
		tmp1 = tmp1->next;
	}
	tail = ft_lstlast(tmp);
	tmp->pos = tail->pos;
	tail->pos -= 1;
	tail->next = tmp;
	tmp->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(&a);
	rb(&b);
	write(1, "rr\n", 3);
}
