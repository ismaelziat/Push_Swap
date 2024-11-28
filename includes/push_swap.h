#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


#include "ft_libft/libft.h"
#include<stdio.h>
#include<unistd.h>


typedef struct s_stack
{
	int				value;
	int				current_position;
	int				final_index;
	int				push_effort;
	bool			above_median;
	bool			cheapest;
	struct s_stack	*target_node;
	struct s_stack	*prev;
	struct s_list	*next;
}				t_stack;

typedef struct s_list
{
	int				value;
	int				index;
    struct s_list	*next;
}	t_Stack

// Instruction functions
int		swap(t_list **stack);
int		push(t_list **stack_to, t_list **stack_from);
int		rotate(t_list **stack);
int		reverseRotate(t_list **stack);

int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

#endif