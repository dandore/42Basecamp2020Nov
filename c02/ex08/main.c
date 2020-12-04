/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:57:53 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/01 22:29:31 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int 	main(void)
{
	char str[]="AaAaXcVF";
	printf("%s\n", ft_strlowcase(str));
}