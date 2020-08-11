/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:00:37 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/11 16:40:51 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include <stdio.h>

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

char	*cheak_file(char *file)
{
	char	*ch;
	int		fb;
	int		n;

	ch = malloc(sizeof(char) * len_file(file));
	if (ch == NULL)
		return (NULL);
	fb = open(file, 0);
	if (fb == -1)
		return (NULL);
	n = read(fb, ch, len_file(file));
	if (n == -1)
		return (NULL);
	ch[n] = '\0';
	close(fb);
	return (ch);
}

int        len_test_on_test(char *ch)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (ch[i] != '\n' || ch[i] != '\0')
    {
        sum++;
        i++;
    }
    return (sum);
}

int        len_test(char *ch, int nm)
{
    int i;
    int n;
    int sum;

    i = 0;
    n = 0;
    sum = 0;
    while (ch[i] != '\n')
        i++;
    if (ch[i] == '\n')
        i++;
    while (ch[i] != '\0')
    {
        while (ch[i] != '\n')
            sum++;
        while (ch[i] != '\n')
            i++;
        if (ch[i] == '\n')
            i++;
        while (n < nm)
		{
            if (len_test_on_test(&ch[i]) != sum)
                return (0);
			n++;
		}
    }
    return (1);
}
