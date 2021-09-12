/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 10:26:54 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/28 10:27:35 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*my_atoi(char *str)
{
	int minus;
	int i;
	char n[300];

	while (my_num(str[i]) != 0)
	{
		minus = minus + minus_sum(str[i]);
		if ((48 <= str[i] && str[i] <= 57) || )
		{
			if (str[i - 1] == 32)
				break ;
			n = n * 10 + (str[i] - '0');
		}
		if (!(48 <= str[i] && str[i] <= 57) && n > 0)
				return (n);
		i++;
		if (str[i] == '\0')
			break ;
	}
	if (!(minus % 2 == 0))
		n *= -1;
	
	return (n);
}