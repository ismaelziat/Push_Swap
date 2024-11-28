#include "push_swap.h"

int repeated_numbers(t_stack *a, int n)
{
    if (a == NULL)
        return (0);
    while (a)
    {
        if (a->value == n)
            return (1);
        a = a->next;
    }
    return (0);
}