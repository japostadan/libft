/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:25:01 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/15 21:39:09 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
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

    // Print the list before deletion
    printf("List before deletion: ");
    print_list(myList);

    // Delete the first node
    ft_lstdelone(&myList, free_content);

    // Print the list after deletion
    printf("List after deletion: ");
    print_list(myList);
    return 0;
}
*/
