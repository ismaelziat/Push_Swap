/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:20:57 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/04/29 15:45:46 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	a = *lst;
	while (a->next)
	{
		a = a->next;
	}
	a->next = new;
}

/* 
int	main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));
	node1->content = "Primero";
	node1->next = node2;
	node2->content = "Segundo";
	node2->next = node3;
	node3->content = "Tercero";
	node3->next = NULL;
	node4->content = "la funcion funciona";
	node4->next = NULL;
	ft_lstadd_back(&node1, node4);
	printf("%s\n", (char *)node4->content);
	return (0);
} */