#include "push_swap.h"

void	swap(t_stack *top)
{
	int	tmp;
	int	tmp1;

	if (top == NULL || top->next == NULL)
	{
		ft_printf("stack empty\n");
		exit(-1);
	}
	tmp = top->data;
	top->data = top->next->data;
	top->next->data = tmp;
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

void	sa(t_stack *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	swap(b);
	write(1, "sb\n", 3);
}
