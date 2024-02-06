/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:07:48 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/01 12:04:42 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	c;

	c = 0;
	if (!*s || !len || (start > ft_strlen(s)))
		return (NULL);
	sub = (char *) malloc(sizeof(char) * (len + 1));
	while (c < len)
	{
		sub[c] = s[start + c];
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
