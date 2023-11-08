/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:37:35 by aldgonza          #+#    #+#             */
/*   Updated: 2023/11/08 18:58:05 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_create_stack(char **input)
{
	int	i;
	t_list	*stack;
	t_list	*buffer;

	i = 0;
	stack = ft_lstnew(input[i]);
	if (!stack)
		return (NULL);
	stack->index = i;
	i++;
	while (input[i])
	{
		buffer = ft_lstnew(input[i]);
		if (!buffer)
			return (NULL);
		buffer->index = i;
		ft_lstadd_back(&stack, buffer);
		i++;
	}
	// ft_printf("Stack size: %d\n", ft_lstsize(stack));
	// //ft_printf("First content: %d\n", *((int *)stack->content));
	// ft_printf("First content: %s\n", stack->content);
	return (stack);
}

int	ft_push_swap(char **input)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = ft_create_stack(input);
	ft_stack_vis(stack_a, stack_b);
	// stack_a = ft_sa(stack_a);
	// ft_stack_vis(stack_a, stack_b);
	return (1);
}  