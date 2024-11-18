/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:26:27 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/04/10 15:26:27 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	while (n--)
		*b++ = *a++;
	return (dest);
}
