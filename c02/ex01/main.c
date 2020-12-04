/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:39:11 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/02 23:29:18 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);


int		main(void)
{
    unsigned int n = 6;
    char src[] = "Adoro barulho de obra";
	char dest[] = "Odeio obra";
	
    ft_strncpy(dest, src, n);
    printf("%s\n", src);
    printf("%s\n", dest);
    
}