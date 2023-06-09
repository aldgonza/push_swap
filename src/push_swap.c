/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:37:35 by aldgonza          #+#    #+#             */
/*   Updated: 2023/06/09 21:32:13 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_push_swap(char **input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if ((ft_printf("%s\n", input[i])) <= 0)
		{
			ft_printf("\nERROR!:\nft_printf failure.\n\n");
			return (-1);
		}
		i++;
	}
	return (1);
}