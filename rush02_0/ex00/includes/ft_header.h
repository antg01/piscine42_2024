/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:26:53 by angerard          #+#    #+#             */
/*   Updated: 2024/02/25 11:32:44 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

typedef struct s_dict_entry
{
	char	number;
	char	*words;
}	t_dict_entry;
t_dict_entry	*parse_dictionary(char *file_path);
int				ft_atoi(char *str);
char			*ft_strdup(char *src);
void			ft_putstr(char *str);
char			ft_strlen(char *str);
void			print_number_in_words(int number, t_dict_entry *dictionary);

#endif
