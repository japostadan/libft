/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:44:21 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/23 20:33:16 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
 *function that join 2 string into new 
 *check first there are strings passed
 *then allocate memory to the new string (len of s1 + s2 +1)
 *then iterate through the s1 while copying the value to new till s1 end
 *then iterate through s2 and copy to the array where s1 ends
 *then add the terminating character
 *finally return the new string
 *
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*new_s;

	i = 0;
	j = 0;
	if (!*s1 && !*s2)
		return (NULL);
	new_s = (char *) malloc((sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}
/*
int main()
{
	const char *s1 = "test";
	const char *s2 = "me";
	char *t = ft_strjoin(s1,s2);

	printf("result: %s",t);
	free(t);
	return 0;
}*/
