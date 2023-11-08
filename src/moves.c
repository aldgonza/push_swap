/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:14:47 by aldgonza          #+#    #+#             */
/*   Updated: 2023/11/08 19:03:29 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_sa(t_list *stack)
{
	t_list	*head;
	t_list	*a;
	t_list	*b;

	head = stack; // 1st pos
	a = head->next; // 2nd pos
	b = a->next; // 3rd pos
	head->next = b; // next of head to 3rd pos
	a->next = head; // new head to 2nd pos 

	return (a);
}

t_list	*ft_sb(t_list *stack)
{
	stack = ft_sa(stack);
	return (stack);
}
t_list	*ft_pb(t_list)