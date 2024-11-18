/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:23:23 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/04/09 14:23:23 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dest;
	b = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (a > b && a < b + n)
	{
		a += n;
		b += n;
		while (n--)
		{
			*(--a) = *(--b);
		}
	}
	else
	{
		while (n--)
			*a++ = *b++;
	}
	return (dest);
}
