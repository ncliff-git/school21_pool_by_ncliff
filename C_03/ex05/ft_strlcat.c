/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 13:59:14 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/26 13:59:35 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	my_strlen(char *sr)
{
	unsigned int i;

	i = 0;
	while (sr[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				a;
	unsigned int	sz;

	a = 0;
	i = my_strlen(dest);
	sz = my_strlen(dest) + my_strlen(src);
	size -= (my_strlen(dest) + 1);
	while (src[a] != '\0' && size > 0)
	{
		dest[i] = src[a];
		i++;
		a++;
		size--;
	}
	dest[i] = '\0';
	return (sz);
}
