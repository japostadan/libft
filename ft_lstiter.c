/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:46:12 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/15 22:36:53 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
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

// Function to print the content of a node
void print_content(void *content) {
    printf("%p ", content);
}

int main() {
    t_list *myList = ft_lstnew("Node 1");
    ft_lstadd_back(&myList, ft_lstnew("Node 2"));

    // Print the list before applying the function
    printf("List before applying the function: ");
    print_list(myList);

    // Apply the print_content function to each node
    ft_lstiter(myList, print_content);
    printf("\n");
    return 0;
}
*/
