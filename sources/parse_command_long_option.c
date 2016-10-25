/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_command_long_option.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:42:55 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:42:57 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

bool		parse_command_long_option(t_command *command, const char *option)
{
	int		value;

	value = true;
	if (option_exist(command, option + 2))
	{
		active_option_of_command(command, option + 2);
	}
	else
		value = false;
	return (value);
}
