/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:53:18 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/03 19:08:50 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest,char *src);

int 	main(void)
{
	char src[] = "de pao de batata";
	char dest[] = "eu gosto ";

	printf("%s\n", ft_strcat(dest, src));
	//printf("%s\n", strcat(dest, src));
	return 0;
}
