/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:56:49 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/30 21:37:38 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 #include <stdio.h>
 #include <stdlib.h>
 * search s1 if there are chars == set
 * then remove it and set to new string
 * then add the terminating char
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
int main() {
    const char *string = "Aaaatest me aa";
	const char *set = "Aa";
    char* tr = ft_strtrim(string, set);

    printf("trimmed string is \"%s\"\n", tr);

    free(tr);

    return 0;
}
*/
