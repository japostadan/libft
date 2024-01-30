/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:11:59 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/23 13:53:39 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	ptr = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ptr && *s != c)
		i--;
	if (*s == c)
		return ((char *) s);
	return (0);
}
