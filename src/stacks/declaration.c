#include "push_swap.h"

t_stack	*stack_a(void)
{
	static t_stack	main;

	return (&main);
}
t_stack	*stack_b(void)
{
	static t_stack main;
	return (&main);
}