/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:08:29 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/05/01 12:17:06 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	d_len = 0;
	s_len = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	while (src[s_len])
		s_len++;
	if (size == 0)
		return (s_len);
	if (size <= d_len)
		return (size + s_len);
	ft_strlcpy(dst + d_len, src, size - d_len);
	return (d_len + s_len);
}
