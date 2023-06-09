/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 21:31:52 by aldgonza          #+#    #+#             */
/*   Updated: 2023/06/09 21:32:02 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_arg_check(char **ptr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(ptr[i])
	{
		while (ptr[i][j])
		{
			if (!ft_isdigit(ptr[i][j]))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc <= 1 || !(ft_arg_check(argv + 1)))
	{
		ft_printf("\nERROR!: Need arguments/Wrong Format.\n\n");
		return (-1);
	}
	else if (ft_push_swap(argv + 1) != 1)
	{
		ft_printf("\nERROR!: push_swap failure.\n\n");
		return (-1);
	}
	return (1);
}