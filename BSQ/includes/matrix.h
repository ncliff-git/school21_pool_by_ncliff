/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:04:51 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/12 14:03:43 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		len_file(char *file);
char	*cheak_file(char *file);
int		sz_nbr_str(char *ch);
int		sz_str(char *ch);
void	mass_f(char *ch, char c1, char c2);
int		mass_test(char *ch, char c1, char c2);
int		len_test(char *ch, int nm);
int		test(char *ch, char c1, char c2);

#endif
