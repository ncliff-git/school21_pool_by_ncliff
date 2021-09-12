/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_argument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:36:48 by cobara            #+#    #+#             */
/*   Updated: 2020/08/12 19:53:09 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_arg.h"

int		ft_atoi(char *arg)
{
	int result;
	int i;
	int len;

	len = str_len(arg) - 3;
	i = 0;
	result = 0;
	while (is_number(arg[i]) == 1 && i < len)
	{
		result = result * 10 + (arg[i] - '0');
		i++;
	}
	return (result);
}

int		is_printable(char c)
{
	if (' ' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*sub_arg(char *arr)
{
	int		i;
	char	*result;
	int		j;
	int		z;

	i = 0;
	j = 0;
	z = 0;
	while (arr[z] == '0')
		z++;
	while (arr[i] != '\n' && arr[i] != '\0')
		i++;
	result = malloc(i * sizeof(char));
	while (z < i)
	{
		result[j] = arr[z];
		j++;
		z++;
	}
	result[j] = '\0';
	return (result);
}

int		is_valid_arg(char *argv, char *s1, char *s2, char *s3)
{
	char	*proxy;
	int		i;
	int		dif;

	if (argv == NULL)
		return (-1);
	proxy = sub_arg(argv);
	if (proxy == NULL || str_len(proxy) < 4)
		return (-1);
	i = ft_atoi(proxy);
	dif = str_len(proxy) - num_len(i);
	if (i <= 0 || dif != 3)
	{
		return (-1);
	}
	*s1 = proxy[str_len(proxy) - 3];
	*s2 = proxy[str_len(proxy) - 2];
	*s3 = proxy[str_len(proxy) - 1];
	if (*s1 == *s2 || *s2 == *s3 || *s1 == *s3)
		return (-1);
	if (is_printable(*s1) != 1 || is_printable(*s2) != 1
			|| is_printable(*s3) != 1)
		return (-1);
	return (i);
}
