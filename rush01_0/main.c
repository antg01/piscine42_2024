/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:06:25 by angerard          #+#    #+#             */
/*   Updated: 2024/02/18 12:52:16 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		validate_input(char *input);
void	parse_views(char *input, int up[4], int down[4], int left[4], int right[4]);
int		solve_grid(int grid[4][4], int row, int col, int up[], int down[], int left[], int right[]);
void	print_grid(int grid[4][4]);

int	main(int ac, char **av)
{
	int		up[4];
	int		down[4];
	int		left[4];
	int		right[4];

	int grid[4][4] = {{0}};
	if (ac == 2 && validate_input(av[1]))
	{
		parse_views(av[1], up, down, left, right);
		if (solve_grid(grid, 0, 0, up, down, left, right))
			print_grid(grid);
		else
			write(1, "Error\n", 6);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
