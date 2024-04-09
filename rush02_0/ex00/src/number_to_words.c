/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_words.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:34:35 by angerard          #+#    #+#             */
/*   Updated: 2024/02/25 11:36:27 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

t_dict_entry	*parse_dictionary(char *file_path)
{
	int	fd = open(file_path, O_RDONLY);
}

void	print_word_from_number(int number, t_dict_entry *dictionary, int dict_size)
{
}

void	print_number_in_words(int number, t_dict_entry *dictionary)
{
}
