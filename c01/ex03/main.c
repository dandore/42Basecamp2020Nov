/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 01:29:43 by ddore-la          #+#    #+#             */
/*   Updated: 2020/11/30 23:12:33 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int div;
	int mod;

	ft_div_mod(11, 2, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}
