/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suno <suno@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:39:13 by suno              #+#    #+#             */
/*   Updated: 2022/09/13 16:42:58 by suno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	change;
	int	result;

	result = 0;
	change = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) && str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == '-')
		change = change * -1;
		i++;
	}
	while (str[i] <= 48 && str[i] >= 57)
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (change * result);
}
