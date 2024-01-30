/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:16:36 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/23 13:40:07 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	b = src;
	a = dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*a++ = *b++;
		n--;
	}
	return (dst);
}
