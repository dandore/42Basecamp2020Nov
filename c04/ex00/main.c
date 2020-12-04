/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:07:29 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/04 02:21:05 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int main(void)
{
	char str[] =  "Ralouu";
	
	printf("%d\n", ft_strlen(str));
//printf("%lu\n", strlen(str));
	
	return 0;
}
