/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:05:07 by cobara            #+#    #+#             */
/*   Updated: 2020/08/12 19:51:16 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITM_H
# define ALGORITM_H

# include "ft_arg.h"
# include "matrix.h"
# include <stdlib.h>
# include "algoritm.h"
# include "unistd.h"

int **g_matrix;
int g_max_i;
int g_max_j;
int g_line;
int g_column;
int g_max;
char g_s1;
char g_s2;
char g_s3;
char *g_ch;

int		min(int a, int b, int c);
int		**find_sq(void);
int		**set_val(void);
void	set_index(void);
void	set_symb(void);
void	print(void);
void	ft_putstr(char *c);
void	terminal_input(void);
void	func(void);
int		test_console_input(char *str);
void	clean_matrix();
int		is_printable(char c);

#endif
