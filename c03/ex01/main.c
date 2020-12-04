/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:53:18 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/03 22:51:22 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	unsigned int n = 11;
	char s1[] = "hello world";
	char s2[] = "hello world hi";

	printf("%i\n", ft_strncmp(s1, s2, n));
}
