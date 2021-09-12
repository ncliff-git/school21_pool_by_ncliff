/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:00:37 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/12 19:38:28 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/matrix.h"
#include "../includes/algoritm.h"

int		len_file(char *file)
{
	int		len;
	int		n;
	int		fb;
	int		ch[200];

	n = 0;
	len = 0;
	fb = open(file, 0);
	if (fb < 0)
		return (-1);
	while ((n = read(fb, ch, 199)) > 0)
		len += n;
	if (n < 0)
		return (-1);
	close(fb);
	return (len);
}

char	*cheak_file(char *file)
{
	char	*ch;
	int		fb;
	int		n;
	int		len;

	len = len_file(file);
	if (len <= 0)
		return (NULL);
	ch = malloc(sizeof(char) * len);
	if (ch == NULL)
		return (NULL);
	fb = open(file, 0);
	if (fb == -1)
		return (NULL);
	n = read(fb, ch, len_file(file));
	if (n == -1)
		return (NULL);
	ch[n] = '\0';
	if (ch[n] == '\0' && ch[n - 1] != '\n')
		return (NULL);
	close(fb);
	return (ch);
}

int		len_one_str(char *ch)
{
	int i;

	i = 0;
	g_column = 0;
	while (ch[i] != '\n')
		i++;
	if (ch[i] == '\n')
		i++;
	if (ch[i] == '\0' || ch[i] == '\n')
		return (-1);
	while (ch[i] != '\n')
	{
		g_column++;
		i++;
	}
	if (ch[i] == '\n')
		i++;
	return (i);
}

int		len_test(char *ch, int nm)
{
	int i;
	int n;
	int sum;

	i = len_one_str(ch);
	if (i == -1)
		return (-1);
	sum = g_column;
	while (ch[i] != '\0')
	{
		n = 0;
		while (ch[i] != '\n')
		{
			i++;
			n++;
		}
		if (ch[i] == '\n')
			i++;
		sum += n;
		if (n != g_column)
			return (-1);
	}
	if (sum / g_column == nm)
		return (g_column);
	return (-1);
}
