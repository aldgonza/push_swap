/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 21:31:52 by aldgonza          #+#    #+#             */
/*   Updated: 2023/11/08 17:34:04 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_double_check(char **ptr)
{
	int		i;
	int		j;
	
	i = 0;
	j = 1;
	while (ptr[i])
	{
		while (ptr[j])
		{
			if (!ft_strncmp(ptr[i], ptr[j], ft_strlen(ptr[j])))
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	  ft_dig_check(char **ptr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(ptr[i])
	{
		while (ptr[i][j])
		{
			if ((ptr[i][j] == '-' || ptr[i][j] == '+')
				&& (j != 0 && ptr[i][j - 1] != ' '))
				return (0);
			if ((ptr[i][j] == '-' || ptr[i][j] == '+'))
				j++;
			if (!ft_isdigit(ptr[i][j]))
			{
				ft_printf("Digits only plz...\n");
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	if (i <= 1)
		{
			ft_printf("Can't sort one number...\n");
			return (0);
		}

	if (!ft_double_check(ptr))
	{
		ft_printf("Doubles...\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	**ptr;

	ptr = NULL;
	if (argc <= 1)
	{
		ft_printf("Need arguments.\nError(-1).\n");
		return (-1);
	}
	else if (argc == 2)
	{
		ptr = ft_split(argv[1], ' ');
		//////DON'T FORGET TO FREE THE PTR
		//////FROM THIS POINT ON
		//////ASSHAT!!!!
		if (!ft_dig_check(ptr))
		{
			ft_printf("Nice try.\nError(-2).\n");
			return (-2);
		}
		if (ft_push_swap(ptr) != 1)
		{
			ft_printf("Push_swap failure.\nError(-2).\n");
			return (-1);
		}	
		// ft_printf("argc == 2\n");
	}
	else if (!ft_dig_check(argv + 1))
		{
			ft_printf("Nice try.\nError(-2).\n");
			return (-2);
		}
	else if (ft_push_swap(argv + 1) != 1)
	{
		ft_printf("Push_swap failure.\nError(-2).\n");
		return (-1);
	}
	else
		ft_printf("Exit(0).\n");
	exit(0);
	return (1);
 }