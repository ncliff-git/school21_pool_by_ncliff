/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:25:24 by cobara            #+#    #+#             */
/*   Updated: 2020/08/12 17:07:51 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		str_len(char *argv)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (argv[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

int		num_len(int nb)
{
	int len;

	len = 0;
	while (nb / 10 > 0)
	{
		len++;
		nb /= 10;
	}
	len++;
	return (len);
}
