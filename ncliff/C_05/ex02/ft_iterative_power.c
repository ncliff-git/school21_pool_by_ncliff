/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:51:32 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/28 11:51:49 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	while (power != 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
