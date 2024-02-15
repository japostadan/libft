/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:36:56 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/15 22:37:30 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
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
    ft_lstadd_back(&myList, ft_lstnew("Node 2"));

    // Print the list after adding to the back
    printf("List after adding to the back: ");
    print_list(myList);
    return 0;
}
*/
