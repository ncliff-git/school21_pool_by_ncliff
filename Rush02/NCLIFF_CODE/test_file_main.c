/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_file_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:29:31 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/09 22:40:04 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_file.h"

int		test_ch_toch(char *ch, int i)
{
	if (ch[i] == '0' && (ch[i + 1] <= 57 && ch[i + 1] >= 48))
		return (-1);
	if (ch[i] < 48 || ch[i] > 57)
		return (-1);
	while (ch[i] != ' ' && ch[i] != ':')
		if (ch[i] > 57 || ch[i++] < 48)
			return (-1);
	while (ch[i] != ':')
		if (ch[i++] != ' ')
			return (-1);
	i++;
	return (i);
}

int		test_ch(char *ch, int i, int print)
{
	while (ch[i] != '\0')
	{
		while (ch[i] == '\n')
			i++;
		print = 0;
		if ((i = test_ch_toch(ch, i)) == -1)
			return (0);
		while (ch[i] != '\n')
		{
			if (ch[i] > 32 && ch[i] < 127)
				print++;
			i++;
		}
		if (print == 0)
			return (0);
		i++;
	}
	return (1);
}

int		len_file(char *file)
{
	int		len;
	int		n;
	int		fb;
	int		ch[200];

	n = 0;
	len = 0;
	fb = open(file, 0);
	while ((n = read(fb, ch, 199)) > 0)
		len += n;
	close(fb);
	return (len);
}

int		file_read(char *file, char **ch)
{
	int		i;
	int		n;
	int		fb;
	char	cha[1];

	i = 0;
	fb = open(file, 0);
	if (fb == -1)
		return (0);
	while ((n = read(fb, cha, 1)) > 0)
	{
		(*ch)[i] = cha[0];
		i++;
	}
	if (n == -1)
		return (0);
	(*ch)[i] = '\0';
	close(fb);
	if (test_ch(*ch, 0, 0) == 0)
	{
		return (0);
	}
	return (i);
}

char	*cheak_file(char *file)
{
	char	*ch;

	ch = malloc(sizeof(char) * len_file(file));
	if (ch == NULL)
		return (NULL);
	if (file_read(file, &ch) == 0)
	{
		return (NULL);
	}
	return (ch);
}
