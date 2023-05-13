#include "push_swap.h"

void	print_stacks(void)
{
	t_list	*node_a;
	t_list	*node_b;

	node_a = stack_a()->head;
	node_b = stack_b()->head;
	printf("Stack A: ");
	while (node_a)
	{
		printf("%d | ", *(int *)node_a->content);
		node_a = node_a->next;
	}
	printf("\nStack B: ");
	while (node_b)
	{
		printf("%d | ", *(int *)node_b->content);
		node_b = node_b->next;
	}
	printf("\n");
}

void	ft_build_stack(char **arguments)
{
	int	i;
	int	*tmp;

	i = 1;
	tmp = 0;
	while (arguments[i])
	{
		if (arguments[i][0])
		{
			tmp = (int *)malloc(sizeof(int));
			if(!tmp)
				return ;
			*tmp = ft_atoi(arguments[i]);
			ft_lstadd_back(&stack_a()->head, ft_lstnew(tmp));
		}
		i++;
	}
	print_stacks();
}

int	main(int ac, char **av)
{
	if (ac > 2)
		ft_build_stack(av);
	else
		ERROR;
}