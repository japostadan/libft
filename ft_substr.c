/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:07:48 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/30 21:39:47 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
 *	
 * function that accepts a string and where to start and the length
 * of the substring that will be returned
 * then return the substring with the null terminator
 * */

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
/*
int main() {
    const char string[] = "test";
    char* sub = ft_substr(string, 5, 2);

    printf("substring is \"%s\"\n", sub);

    free(sub);

    return 0;
}
*/
