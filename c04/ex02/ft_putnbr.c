/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:52:57 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/04 17:25:10 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int			number[11];
	int			i;
	long int	l_number;

	l_number = nb;
	i = 0;
	if (l_number < 0)
	{
		l_number = -l_number;
		write(1, "-", 1);
	}
	if (l_number == 0)
		write(1, "0", 1);
	while (l_number > 0)
	{
		number[i] = l_number % 10 + '0';
		l_number = l_number / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &number[i], 1);
		i--;
	}
}
