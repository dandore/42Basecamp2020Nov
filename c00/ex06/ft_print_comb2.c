/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:41:11 by ddore-la          #+#    #+#             */
/*   Updated: 2020/11/26 15:55:28 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int i)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = -1;
	while (n1 < 98)
	{
		n1++;
		n2 = n1;
		while (n2 < 99)
		{
			n2++;
			ft_print_number(n1);
			ft_putchar(' ');
			ft_print_number(n2);
			if (n1 != 98 || n2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
