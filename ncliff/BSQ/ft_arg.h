/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:37:28 by cobara            #+#    #+#             */
/*   Updated: 2020/08/10 16:30:14 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARG_H
# define FT_ARG_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		is_number(char c);
int		str_len(char *argv);
int		num_len(int nb);
int		ft_atoi(char *arg);
char	*sub_arg(char *arr);
int		is_valid_arg(char *argv, char *s1, char *s2, char *s3);

#endif
