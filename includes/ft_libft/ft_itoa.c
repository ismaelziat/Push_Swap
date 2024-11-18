/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iziat-hi <iziat-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:03:52 by iziat-hi          #+#    #+#             */
/*   Updated: 2024/05/01 11:56:31 by iziat-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int		size;
	long	num;

	size = 0;
	num = n;
	if (num <= 0)
	{
		num = -num;
		size++;
	}
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	i;
	int		size;
	char	*str;

	i = n;
	size = ft_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	if (i == 0)
		str[0] = '0';
	while (i > 0)
	{
		str[size - 1] = i % 10 + '0';
		i = i / 10;
		size--;
	}
	return (str);
}
