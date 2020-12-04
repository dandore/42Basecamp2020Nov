/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:49:09 by ddore-la          #+#    #+#             */
/*   Updated: 2020/11/30 19:45:14 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int *a;
	int *b;
	int x;
	int y;

	x = 10;
	y = 3;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
	printf("o valor de a é %d\n e o valor de b é %d\n", *a, *b);
}
