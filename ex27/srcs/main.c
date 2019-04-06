/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:52:36 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/02 14:36:14 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd;
	int		n;
	char	chr;

	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, &chr, 1))
		write(1, &chr, 1);
	close(fd);
	return (0);
}
