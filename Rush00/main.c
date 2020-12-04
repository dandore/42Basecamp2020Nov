/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 23:01:17 by ddore-la          #+#    #+#             */
/*   Updated: 2020/11/23 01:36:36 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**we assign the existance of the function rush**
*/

void	rush(int x, int y);

/*
**the main function builds a form with characters A, B, C and " ", through**
**the rush function. (x) represents the number of lines and (y) the number**
**of columns**
*/

int		main(void)
{
	rush(5, 10);
	return (0);
}
