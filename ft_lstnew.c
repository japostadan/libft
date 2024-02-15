/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:32:07 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/14 21:27:55 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Assume your ft_lstnew and t_list definition are in "libft.h"

int main() {
    // Test 1: Create a new list node with an integer content
    int content1 = 42;
    t_list *node1 = ft_lstnew(&content1);

    if (node1 != NULL) {
        printf("Test 1 passed: Node created successfully\n");
        printf("Content of Node 1: %d\n", *(int*)(node1->content));
    } else {
        printf("Test 1 failed: Node creation failed\n");
    }

    // Test 2: Create a new list node with a string content
    char *content2 = "Hello, World!";
    t_list *node2 = ft_lstnew(content2);

    if (node2 != NULL) {
        printf("Test 2 passed: Node created successfully\n");
        printf("Content of Node 2: %s\n", (char*)(node2->content));
    } else {
        printf("Test 2 failed: Node creation failed\n");
    }
    return 0;
}
*/
