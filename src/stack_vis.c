/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_vis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:24:27 by aldgonza          #+#    #+#             */
/*   Updated: 2023/11/08 18:57:27 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_stack_vis(t_list	*stack_a, t_list *stack_b)
{
	t_list	*head_a;
	t_list	*head_b;
	int		i;

	head_a = stack_a;
	head_b = stack_b;
	i = 0;
	if (!stack_a && !stack_b)
		return(0);
	ft_printf("Visualization of the stacks:\n");
	ft_printf("Stack_A------------------------\n");
	if (head_a && !head_b)
	{
		while (head_a)
		{
			ft_printf("   %s\n", head_a->content);
			head_a = head_a->next;
			i++;
		}
	}
	ft_printf("-------------------------------\n");
	ft_printf("End of stack\nAmount of items: %i\n*\n", i);
	return (0);
}