/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:08:29 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/05/01 15:38:20 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = NULL;
	while (lst)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}

/* int	main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	node1->content = "Primero";
	node1->next = node2;
	node2->content = "Segundo";
	node2->next = node3;
	node3->content = "Tercero";
	node3->next = NULL;
	t_list *last_node = ft_lstlast(node1);

	if (last_node != NULL)
	{
		printf("El último nodo contiene: %s\n", (char *)last_node);
	}
	else
	{
		printf("La lista está vacía.\n");
	}
	free(node1);
	free(node2);
	free(node3);
	return (0);
} */