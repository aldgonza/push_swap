/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:40:23 by aldgonza          #+#    #+#             */
/*   Updated: 2022/07/20 18:07:44 by aldgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

int			ft_isprint(int c);
size_t		ft_strlen_print(const char *str);
int			ft_putchar_fd_print(int c, int fd);
int			ft_putstr_fd_print(char *s, int fd);
int			ft_putnbr_fd_print(int n, int fd);

#endif
