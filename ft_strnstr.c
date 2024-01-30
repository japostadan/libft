/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:26:09 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/23 18:00:47 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
/*
 int main () {
    const char haystack[100] = "the test file to test to";
    const char needle[10] = "test";
    char *result;
	char *test;

    result = ft_strnstr(haystack, needle, 100);
    printf("The str from ft_strnstr  is: %s\n", result);

    test = strnstr(haystack, needle, 100);
    printf("The substring from strnstr is: %s\n", test);
    return(0);
 }
 */
