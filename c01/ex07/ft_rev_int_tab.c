/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:27:42 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/01 03:06:35 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
