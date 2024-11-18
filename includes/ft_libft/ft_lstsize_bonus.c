/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:24:52 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/04/29 15:06:25 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h>
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*uno = (t_list *)malloc(sizeof(t_list));
	t_list	*dos = (t_list *)malloc(sizeof(t_list));
	t_list	*tres = (t_list *)malloc(sizeof(t_list));
	int 	arrayuno[] = {10, 20, 30, 40, 50};
	char	*arraydos[] = {"uno", "dos", "tres"};
	char	arraytres[] = {"hola"};
	
	uno->content = arrayuno;
	uno->next = dos;
	dos->content = arraydos;
	dos->next = tres;
	tres->content = arraytres;
	tres->next = NULL;
	printf("uno      %d\n", ft_lstsize(uno));
	printf("dos      %d\n", ft_lstsize(dos));
	printf("tres     %d\n", ft_lstsize(tres));
	free(uno);
	free(dos);
	free(tres);
	return (0);
}
 */