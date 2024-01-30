/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:19:16 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/16 20:36:15 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	offset;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	offset = dst_len;
	while (*(src + i) != '\0')
	{
		*(dst + offset) = *(src + i);
		i++;
		offset++;
		if (offset == dstsize -1)
			break ;
	}
	*(dst + offset) = '\0';
	return (dst_len + src_len);
}
