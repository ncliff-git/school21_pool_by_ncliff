/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:44:54 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/05 21:05:35 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_math.h"
#include <unistd.h>

int		pls(int n1, int n2)
{
	return (n1 + n2);
}

int		minus(int n1, int n2)
{
	return (n1 - n2);
}

int		div(int n1, int n2)
{
	return (n1 / n2);
}

int		mult(int n1, int n2)
{
	return (n1 * n2);
}

int		rema(int n1, int n2)
{
	return (n1 % n2);
}
