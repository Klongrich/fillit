/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klongric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 12:43:57 by klongric          #+#    #+#             */
/*   Updated: 2017/01/27 14:34:35 by klongric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		countlist(t_point **list)
{
	int i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

t_point		**resettable(t_point **list, int size)
{
	t_point **rest;
	int		i;
	int 	j;

	i = -1;
	j = -1;
	rest = (t_point **)malloc(sizeof(t_point *) * size);
	while (++i < size)
	{
		rest[i] = (t_point *)malloc(sizeof(t_point) * 4);
		j = -1;
		while (++j < 4)
		{
			rest[i][j].x = list[i][j].x;
			rest[i][j].y = list[i][j].y;
		}
	}
	return (rest);
}
