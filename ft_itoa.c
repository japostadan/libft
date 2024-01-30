/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:56:20 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/28 12:32:49 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getintlen(int value)
{
	int	l;
	int	neg;

	l = 1;
	neg = 1;
	if (value < 0)
	{
		value *= -1;
		neg = -1;
	}
	while (value > 9)
	{
		l++;
		value /= 10;
	}
	if (neg == -1)
		return (l + 1);
	return (l);
}

static int	ft_isneg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*instr;
	int		neg;

	neg = ft_isneg(n);
	len = ft_getintlen(n);
	instr = (char *)malloc(sizeof(char *) * len +1);
	if (n == -2147483648)
		return ("-2147483648");
	if (!instr)
		return (0);
	if (neg == -1)
		n *= -1;
	instr[len--] = 0;
	if (n == 0)
		instr[len--] = '0';
	while (n)
	{
		instr[len--] = ((n % 10) + '0');
		n /= 10;
	}
	if (neg == -1)
		instr[len] = '-';
	return (instr);
}
