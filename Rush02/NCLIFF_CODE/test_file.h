/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_file.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:26:42 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/09 22:51:25 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FILE_H
# define TEST_FILE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		test_ch(char *ch, int i, int print);
int		len_file(char *file);
int		file_read(char *file, char **ch);
char	*cheak_file(char *file);
char	**mass_f(char *ch, int i, int n, int a);

#endif
