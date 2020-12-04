/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 23:01:17 by ddore-la          #+#    #+#             */
/*   Updated: 2020/11/22 21:32:03 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**this counter will run from 0 untill the value of "x" and "y" minus 1,**
**to specify which character will be putted in each column from a specific**
**line**
*/

int g_count_x;
int g_count_y;

/*
**we assign the existance of the function ft_putchar**
*/

void		ft_putchar(char c);

/*
**this function builds the first line of the form choosing which char to put**
**in each space, using the counter in relation with the number of columns**
**inputted (y).**
*/

int			first_x(int g_count_y, int y)
{
	if (g_count_y == 0)
	{
		ft_putchar('/');
	}
	else if (g_count_y == y - 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
	return (0);
}

/*
**if the inputted number of lines (x) is higher than 1, this function builds**
**the last line of the form choosing which char to put in each space, using**
**the counter in relation with the (y) value**
*/

int			last_x(int g_count_y, int y)
{
	if (g_count_y == 0)
	{
		ft_putchar('\\');
	}
	else if (g_count_y == y - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
	return (0);
}

/*
**if (x) value is higher than 2, this function will build lines between first**
**and last ones, while the counter is higher than 0 and lesser the (x).**
**It will choose which char to put in each space, using the counter in**
**relation with the (y) value.**
*/

int			middle_x(int g_count_y, int y)
{
	if (g_count_y == 0 || g_count_y == y - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
	return (0);
}

/*
**rush function has two loops, one is nested. The first loop starts and**
**iterates line counter value untill it reaches the (x-1) line value,**
**while this is a true value loop, the nested one will operate iterating to**
**the columns counter value - untill it reaches the (y-1) column**
**value - than the function will specify which character insertion function**
**to use for this specific line type, untill it becomes false.**
**At the end, the function will reset the column counter and return to line**
**loop, choosing which new line type will be build.**
*/

void		rush(int x, int y)
{
	while (g_count_x < x && x > 0 && y > 0)
	{
		g_count_y = 0;
		while (g_count_y < y)
		{
			if (g_count_x == 0)
			{
				first_x(g_count_y, y);
			}
			else if (g_count_x == x - 1)
			{
				last_x(g_count_y, y);
			}
			else
			{
				middle_x(g_count_y, y);
			}
			g_count_y++;
		}
		g_count_x++;
		ft_putchar('\n');
	}
}
