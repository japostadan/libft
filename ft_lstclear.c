/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:40:03 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/15 22:43:00 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	if (!lst || !*lst)
		return ;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
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

// Function to free the content of a node
void free_content(void *content) {
    free(content); // Assuming content was allocated dynamically
}

int main() {
    t_list *myList = ft_lstnew("Node 1");
    ft_lstadd_back(&myList, ft_lstnew("Node 2"));

    // Print the list before clearing
    printf("List before clearing: ");
    print_list(myList);

    // Clear the entire list
    ft_lstclear(&myList, free_content);

    // Print the list after clearing (should be empty)
    printf("List after clearing: ");
    print_list(myList);
    return 0;
}
*/
