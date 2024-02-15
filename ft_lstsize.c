/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:00:20 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/14 22:15:30 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>

void print_list(t_list *list) {
    while (list != NULL) {
        printf("%p ", list->content);
        list = list->next;
    }
    printf("\n");
}

int main() {
    t_list *myList = ft_lstnew("Node 1");
    printf("Initial list size: %d\n", ft_lstsize(myList));

    t_list *newNode = ft_lstnew("Node 0");
    ft_lstadd_front(&myList, newNode);
    printf("List size after adding to the front: %d\n", ft_lstsize(myList));
    return 0;
}
*/
