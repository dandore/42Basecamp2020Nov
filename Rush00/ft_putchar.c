/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 23:01:17 by ddore-la          #+#    #+#             */
/*   Updated: 2020/11/22 21:55:40 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**this function allows the program to write a single char**
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
