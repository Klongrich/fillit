/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klongric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:01:24 by klongric          #+#    #+#             */
/*   Updated: 2017/01/24 22:26:09 by klongric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	printboard(t_point **points, int count)
{
	int j;
	int z;
	
	z = -1;		
 	while (++z < count)
	{
		printf("\nINDEX %d\n", z);
		j = -1;
		while (++j < 4)
			printf("x: %d  y: %d\n", points[z][j].x, points[z][j].y);
	}

}
