/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:03:07 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/04/15 12:31:20 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	size_t	l;

	l = ft_strlen(s);
	a = malloc(l + 1);
	if (a == NULL)
		return (NULL);
	ft_strlcpy(a, s, l + 1);
	return (a);
}
