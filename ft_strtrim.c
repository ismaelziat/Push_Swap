/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:25:35 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/05/01 13:23:58 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	int		i;
	char	*d;

	if (s1 == NULL || set == NULL)
		return (NULL);
	l = 0;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[l]) && s1[l])
		l++;
	while (ft_strrchr(set, s1[i]) && i >= l)
		i--;
	d = malloc(i - l + 2);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s1 + l, i - l + 2);
	return (d);
}
