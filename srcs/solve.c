/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klongric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 17:31:20 by klongric          #+#    #+#             */
/*   Updated: 2017/01/27 17:13:07 by klongric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point		*incerment(t_point *table)
{
	table[0].x++;
	table[1].x++;
	table[2].x++;
	table[3].x++;
	return (table);
}

int		check(t_point *one, t_point *two, t_point *rest, int size, int count)
{
	int j;
	int i;
	int z;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (two[j].x == size)
			{
				z = -1;
				while (++z < 4)
				{
					two[z].x = rest[z].x;
					two[z].y++;
					if (count == 0)
					{
						if (two[z].y == size)
							return (2);
					}
				}
			}
			if (one[i].x == two[j].x && one[i].y == two[j].y)
				return(0);
		}
	}
	return (1);
}

t_point		**solve(t_point **table, int size, int count, int i, int j, int flag, t_point **reset)
{
	int result;
	printf("\n<============== Start of loop =================>\n");
	printf("\nSize %d\n", size);

	result = 0;
	printf("flag: %d\n", flag);
	if (flag == 0)
	{
		reset = resettable(table, count);
		printboard(reset, count);
	}

	while (--count)
	{
		i++;
		j = 0;
		while (j < i)
		{
			printf("\ni: %d\nj: %d\n", i, j);
			while (!(result = check(table[j], table[i], reset[i], size, count)))
				table[i] = incerment(table[i]);
			j++;
		}
		if (result == 2)
		{
			table = reset;
			size++;
			count = countlist(reset);
		}
		printf("result: %d\n", result);
		solve(table, size, count, i ,j, 1, reset);
	}
	printf("\n<=============== End of loop ==================>\n");
	return (table);
}
