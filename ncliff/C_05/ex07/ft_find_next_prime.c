/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 15:20:44 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/28 15:21:01 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int flag;

	if (nb < 2)
		return (0);
	flag = 2;
	while (flag <= nb / 2)
	{
		if (nb % flag == 0)
			return (0);
		flag++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (0);
}
