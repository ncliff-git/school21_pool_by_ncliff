/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 17:22:59 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/25 17:23:57 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*down_char(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 89)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char		*up_char(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((32 <= str[i] && str[i] <= 47) || (58 <= str[i] && str[i] <= 64))
		{
			if (97 <= str[i + 1] && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		if ((91 <= str[i] && str[i] <= 96) || (123 <= str[i] && str[i] <= 126))
		{
			if (97 <= str[i + 1] && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}

char		*up_char_2(char *str)
{
	if (97 <= str[0] && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	down_char(str);
	up_char(str);
	up_char_2(str);
	return (str);
}
