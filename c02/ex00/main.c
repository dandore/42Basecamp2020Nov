/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:44:21 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/01 15:04:30 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char*dest, char*src);

int main(void)
{
	char src[] = "morango";
	char dest[] = "morango";
	
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", src);
	
}
