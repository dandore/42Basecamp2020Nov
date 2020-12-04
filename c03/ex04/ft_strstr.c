/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddore-la <ddore-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 00:15:29 by ddore-la          #+#    #+#             */
/*   Updated: 2020/12/03 17:27:07 by ddore-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int pos_find;
	unsigned int pos_str;
	unsigned int conf_count;

	if (to_find[0] == '\0')
		return (str);
	pos_find = 0;
	while (to_find[pos_find] != '\0')
		pos_find++;
	pos_str = 0;
	while (str[pos_str] != '\0')
	{
		if (str[pos_str] == to_find[0])
		{
			conf_count = 0;
			while (to_find[conf_count] == str[pos_str + conf_count])
			{
				if (conf_count == (pos_find - 1))
					return (&str[pos_str]);
				conf_count++;
			}
		}
		pos_str++;
	}
	return (0);
}
