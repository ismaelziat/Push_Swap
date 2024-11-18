/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:58:36 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/04/24 12:24:22 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*join;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	join = malloc(l1 + l2 + 1);
	if (join != NULL)
	{
		ft_strlcpy(join, s1, l1 + 1);
		ft_strlcat(join, s2, l1 + l2 +1);
	}
	return (join);
}
