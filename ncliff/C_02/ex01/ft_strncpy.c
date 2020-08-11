/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 11:52:56 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/25 12:00:14 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int sum;

	sum = 0;
	while (*(src + sum) != '\0' && sum < n)
	{
		*(dest + sum) = *(src + sum);
		sum++;
	}
	while (sum < n)
	{
		*(dest + sum) = '\0';
		sum++;
	}
	return (dest);
}
