/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suno <suno@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:37:13 by suno              #+#    #+#             */
/*   Updated: 2022/09/12 19:37:22 by suno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr( int nb);

void	ft_play(long long int nb)
{
	long long int	i;
	long long int	j;
	long long int	c;

	c = nb;
	i = 1;
	while (i < nb)
	{
		i = i * 10;
		j = i / 10;
	}
	while (i > 1)
	{
		c = nb % i;
		c = c / j;
		ft_putchar(c + '0');
		i = i / 10;
		j = i / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		ft_play(nb);
	}
	else if (nb > 0)
	{
		ft_play(nb);
	}
	else
	{
		ft_putchar(0 + '0');
	}
}
