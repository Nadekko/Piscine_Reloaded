/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:25:11 by andjenna          #+#    #+#             */
/*   Updated: 2023/10/31 17:40:12 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_puterror(char *err)
{
	while (*err != 0)
		write(2, err++, 1);
}

int	display_file(int fd)
{
	char	buffer;

	if (fd == -1)
	{
		ft_puterror("Cannot read file.\n");
		return (1);
	}
	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
	return (0);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		if (ac > 2)
			ft_puterror("Too many arguments.\n");
		if (ac < 2)
			ft_puterror("File name missing.\n");
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	display_file(fd);
	close(fd);
	return (0);
}
