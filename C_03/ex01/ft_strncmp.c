/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 11:07:37 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/26 11:08:05 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
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
