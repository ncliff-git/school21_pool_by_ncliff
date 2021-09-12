/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 12:17:10 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/26 12:18:21 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			my_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int sr;

	i = 0;
	sr = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > 0)
	{
		if (s1[i] - s2[i] != 0)
		{
			sr = s1[i] - s2[i];
			break ;
		}
		n--;
		i++;
	}
	return (sr);
}

char		*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (to_find[i] != '\0')
	{
		n++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (my_strncmp(&str[i], to_find, n) == 0)
		{
			return (&str[i + n]);
		}
		i++;
	}
	return (0);
}
