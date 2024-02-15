/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:35:08 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/14 21:58:57 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!new)
		return ;
	if (!list)
	{
		*list = new;
		return ;
	}
	new->next = *list;
	*list = new;
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
    // Create an initial linked list
    t_list *myList = ft_lstnew("Node 1");

    // Print the initial state of the list
    printf("Initial list: ");
    print_list(myList);

    // Add a new node to the front of the list
    t_list *newNode = ft_lstnew("Node 0");
    ft_lstadd_front(&myList, newNode);

    // Print the updated list
    printf("After adding to the front: ");
    print_list(myList);

    // Add more nodes to the front as needed...
    return 0;
}
*/
