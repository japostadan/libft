/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:59:59 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/11 21:09:32 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if((c >= 60 && c <= 71) || (c >= 101 c <= 132) || (c >= 141 && c <= 163))
		return (1);
	return (0);
}