/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:39:11 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/01 15:28:59 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

int main(void)
{
	int tab[] = {1,2 , 3, 4, 5, 6, 7};
	int size;
	size = 7;

	printf("%i\n", tab[0]);
	printf("%i\n", tab[1]);
	printf("%i\n", tab[2]);
	printf("%i\n", tab[3]);
	printf("%i\n", tab[4]);
	printf("%i\n", tab[5]);
	printf("%i\n", tab[6]);


	ft_rev_int_tab(tab, size);
	
	printf("%i\n", tab[0]);
	printf("%i\n", tab[1]);
	printf("%i\n", tab[2]);
	printf("%i\n", tab[3]);
	printf("%i\n", tab[4]);
	printf("%i\n", tab[5]);
	printf("%i\n", tab[6]);

}
