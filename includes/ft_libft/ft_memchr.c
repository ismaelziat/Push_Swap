/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:58:45 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/05/01 12:28:37 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;

	str = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (*str == c2)
			return (str);
		str++;
	}
	return (NULL);
}
