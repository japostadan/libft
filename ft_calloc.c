/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:02:16 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/24 12:26:51 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	new_size;
	void	*output;

	new_size = count * size;
	output = malloc(new_size);
	if (!output)
		return (0);
	ft_memset(output, 0, new_size);
	return (output);
}
