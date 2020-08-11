/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:24:24 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/04 21:09:36 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		n;
	int		fd;
	char	sh[30000];

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
	while ((n = read(fd, sh, 29999)) > 0)
	{
		sh[n] = '\0';
		write(1, &sh, n);
	}
	if (n == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (0);
	}
	return (0);
}
