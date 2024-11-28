#include "push_swap.h"

void    create_node(t_stack **stack, int n)
{
	t_stack	*node;
	t_stack	*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = n;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void    init_stack(t_stack  **a, char **argv, bool flag_argc_2)
{
	long    n;

	while(*argv)
	{
		n = atol(*argv);
		if (n > INT_MAX || n < INT_MIN)
			free_error(a, argv, flag_argc_2);
		if (repeated_numbers(*a, (int)n))
		   free_error(a, argv, flag_argc_2);
		create_node(a, (int)n);
		++argv;
		printf("%p puntero desde main cambia solo una vez " "cuando cambia de NULL a 1 nodo \n, *a");
	}
}

