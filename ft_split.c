/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:24:43 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/30 18:42:09 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !n)
		return (0);
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*duplicate_word(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			**word;

	i = 0;
	k = 0;
	word = (char **)malloc(sizeof(char) * (count_words(s, c) + 1));
	if (word == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			word[i] = duplicate_word(s + j, i - j);
			k++;
		}
	}
	word[k] = NULL;
	return (word);
}
/*
int main() {
    const char *input_string = "Hello,,Is,A,Test";
    char delimiter = ',';

    // Test the ft_split function
    char **result = ft_split(input_string, delimiter);

    // Check if the result is not NULL
    if (result != NULL) {
        // Print each word in the split result
        for (int i = 0; result[i] != NULL; i++) {
            printf("Word %d: %s\n", i + 1, result[i]);
        }
    }
    else
        printf("Input string is NULL. Cannot split.\n");
    
    return 0;
}
*/
