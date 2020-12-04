/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:05:34 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/03 02:28:29 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	unsigned int nb = 7;
	char src[] = "de pao de batata";
	char dest[] = "eu gosto ";

	//printf("%s\n", ft_strncat(dest, src, nb));
	printf("%s\n", strncat(dest, src, nb));
	
	return 0;
}