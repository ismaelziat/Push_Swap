#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	long	res;
	int		simb;
	int		c;

	res = 0;
	simb = 1;
	c = 0;
	while (nptr[c] == ' ' || nptr[c] == '\t' || nptr[c] == '\n'
		|| nptr[c] == '\v' || nptr[c] == '\f' || nptr[c] == '\r')
		c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			simb = -1;
		c++;
	}
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		res = res * 10 + (nptr[c] - '0');
		c++;
	}
	return (res * simb);
}

t_stack	*find_last_node(t_stack	*last)
{
	if (last == NULL)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}
