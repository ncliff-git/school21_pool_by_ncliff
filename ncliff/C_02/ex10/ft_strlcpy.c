/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 18:47:51 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/25 18:48:13 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int size_s;

	i = 0;
	size_s = 0;
	while (src[i] != '\0')
	{
		size_s++;
		i++;
	}
	i = 0;
	while (*(src + i) != '\0' && i < size)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (size_s);
}
