/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:23:14 by aldgonza          #+#    #+#             */
/*   Updated: 2023/06/07 18:30:05 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../dep/Libft/header/libft.h"
# include "../dep/Printf/include/ft_printf.h"
# include <unistd.h>
# include <signal.h>


int	ft_push_swap(char **input);
int	ft_stack_vis(t_list	*stack_a, t_list *stack_b);
t_list	*ft_sa(t_list *stack);
t_list	*ft_sb(t_list *stack);

#endif
