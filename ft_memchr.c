/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:07:02 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/23 13:36:02 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*#include <string.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char *s = "This is a string";

	printf("True :The reamainder of s after char 'r' is found \"%s" "\n",
			(char *) memchr(s, 'r', 16));

	printf("Fake :The reamainder of s after char 'r' is found \"%s" "\n",
			(char *) ft_memchr(s, 'r', 16));
	}
*/
