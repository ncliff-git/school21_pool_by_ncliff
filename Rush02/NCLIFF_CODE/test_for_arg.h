/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_for_arg.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:21:12 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/08 22:31:35 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FOR_ARG_H
# define TEST_FOR_ARG_H

# include <stdlib.h>
# include <unistd.h>

int		check_for_number(char *ch);
int		size_arg(char *arg);
void	arg_str(char *arg, char **str, int size);
int		cheak_arg(int argc, char **argv, char **file_name, char **number);

#endif
