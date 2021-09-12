/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:24:24 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/03 15:04:47 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	int		fd;
	char	sh[64];

	fd = open(argv[1], 0);
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (fd < 0)
	{
		write(1, "Cannot read file.\n", 18);
		return (0);
	}
	while ((n = read(fd, sh, 63)) > 0)
	{
		i = 0;
		sh[n] = '\0';
		while (sh[i] != '\0' && i < 64)
			write(1, &sh[i++], 1);
	}
	return (0);
}
