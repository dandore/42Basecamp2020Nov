/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:16:06 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/03 22:56:40 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] =  "Achar a agulha no palheiro.";
	char to_find[] = "ag";

	printf("%s\n", ft_strstr(str, to_find));
	return 0;
	
}