/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:16:18 by angerard          #+#    #+#             */
/*   Updated: 2024/02/18 12:42:45 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	solve_grid(int grid[4][4], int row, int col, int up[], int down[], int left[], int right[])
{
	int		i;
	int		next_col;
	int		next_row;
	int		can_place;
	int		num;

	if (row == 4)
		return (1);
	next_col = (col + 1) % 4;
	next_row = row + (col + 1) / 4;
	num = 1;
	while (num <= 4)
	{
		can_place = 1;
		i = 0;
		while (i < 4)
		{
			if (grid[row][i] == num || grid[i][col] == num)
			{
				can_place = 0;
				break;
			}
			i++;
		}
		if (can_place)
		{
			grid[row][col] = num;
			if (solve_grid(grid, next_row, next_col, up, down, left, right))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
