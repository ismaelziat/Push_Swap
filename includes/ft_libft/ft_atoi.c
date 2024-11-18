/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:40:30 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/05/01 13:07:24 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	simb;
	int	c;

	res = 0;
	simb = 1;
	c = 0;
	while (nptr[c] == ' ' || nptr[c] == '\t' || nptr[c] == '\n'
		|| nptr[c] == '\v' || nptr[c] == '\f' || nptr[c] == '\r')
		c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			simb = -1;
		c++;
	}
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		res = res * 10 + nptr[c] - '0';
		c++;
	}
	return (res * simb);
}
