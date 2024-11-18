/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:26:35 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/04/29 14:18:47 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h> */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));

	node1->content = "Hola, soy el primer nodo";
	node2->content = "¡Hola desde el segundo nodo!";
	node3->content = "Tercer nodo aquí";

	node1->next = NULL;
	node2->next = NULL;
	node3->next = NULL;

	t_list *my_list = NULL;

	ft_lstadd_front(&my_list, node3);
	ft_lstadd_front(&my_list, node2);
	ft_lstadd_front(&my_list, node1);

	t_list *current = my_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	free(node1);
	free(node2);
	free(node3);

	return 0;
} */