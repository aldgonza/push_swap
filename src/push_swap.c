/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:37:35 by aldgonza          #+#    #+#             */
/*   Updated: 2023/08/16 16:05:40 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_stack(char **input)
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
		ft_lstadd_back(&stack, buffer);
		i++;
	}
	ft_printf("Stack size: %d\n", ft_lstsize(stack));
	//ft_printf("First content: %d\n", *((int *)stack->content));
	ft_printf("First content: %s\n", stack->content);
	return (stack);
}

int	ft_push_swap(char **input)
{
	t_list	*stack_a;
	t_list	*buffer;

	stack_a = ft_stack(input);
	buffer = stack_a;
	return (1);
}