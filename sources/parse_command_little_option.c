/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_command_little_option.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:42:59 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:46:18 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

bool		parse_command_little_option(t_command *command, const char *args)
{
	int		value;
	char	*option;
	int		i;

	if (!args[1])
		return (false);
	i = 1;
	value = true;
	option = ft_strdup("-");
	while (args[i])
	{
		option[0] = args[i];
		if (option_exist(command, option))
			active_option_of_command(command, option);
		else
		{
			value = false;
			break ;
		}
		++i;
	}
	ft_strdel(&option);
	return (value);
}
