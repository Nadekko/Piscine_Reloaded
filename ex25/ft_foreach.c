/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:01:36 by andjenna          #+#    #+#             */
/*   Updated: 2023/10/31 16:20:15 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		c = 48 + (n % 10);
		write(1, &c, 1);
	}
	else if (n <= 9)
	{
		c = 48 + n;
		write(1, &c, 1);
	}
}*/

void	ft_foreach(int	*tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int	main(void)
{
	int	*tab = malloc(sizeof(int) * 1337);
	int	i = 0;

	while (i < 1337)
	{
		tab[i] = i + 1;
		i++;
	}
	ft_foreach(tab, 1337, &ft_putnbr);
	free(tab);
}*/
