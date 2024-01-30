/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:59:09 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/23 13:37:46 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	return (0);
}
/*
int main () {
   char str1[15] = "test  ";
   char str2[15] = "test 2";
   int ret;
   int t;


   ret = memcmp(str1, str2, 6);
   t = ft_memcmp(str1, str2, 6);

   if(ret > 0) {
      printf("str2 is less than str1: %d\n",ret);
      printf("str2 is less than str1 fake: %d\n", t);
   } else if(ret < 0) {
      printf("str1 is less than str2: %d\n",ret);
      printf("str1 is less than str2 fake: %d\n",t);
   } else {
      printf("str1 is less than str2: %d\n",ret);
      printf("str1 is less than str2 fake: %d\n",t);
   }
   
   return(0);
}

*/
