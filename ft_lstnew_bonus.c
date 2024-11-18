/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:34:55 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/05/01 15:27:19 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int main(void)
{
	char *str = "abcdefghijk";
	int num = 42;
	double *dbl_ptr = malloc(sizeof(double));
	*dbl_ptr = 3.14;

	t_list *res_str = ft_lstnew(str);
	t_list *res_num = ft_lstnew(&num);
	t_list *res_dbl = ft_lstnew(dbl_ptr);

	if (res_str)
	{
		printf("Nodo de cadena creado correctamente.
		 Contenido: %s\n", (char *)res_str->content);
	}
	else
	{
		printf("Error al crear el nodo de cadena.\n");
	}

	if (res_num)
	{
		printf("Nodo de entero creado correctamente.
		 Contenido: %d\n", *(int *)res_num->content);
	}
	else
	{
		printf("Error al crear el nodo de entero.\n");
	}

	if (res_dbl)
	{
		printf("Nodo de double creado correctamente. 
		Contenido: %.2f\n", *(double *)res_dbl->content);
	}
	else
	{
		printf("Error al crear el nodo de double.\n");
	}

	free(dbl_ptr);

	return 0;
} */