/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:11:59 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/06 17:41:02 by jpostada         ###   ########.fr       */
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
		s--;
	if (*s == c)
		return ((char *) s);
	return (0);
}
