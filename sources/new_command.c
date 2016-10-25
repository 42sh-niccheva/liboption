/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:17 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:19 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"
#include <stdlib.h>

t_command	*new_command(const char *name, const char *description)
{
	t_command	*command;

	command = NULL;
	if (name && description)
	{
		command = (t_command *)malloc(sizeof(t_command));
		if (command)
		{
			command->name = ft_strdup(ft_strtrim(name));
			command->description = ft_strdup(ft_strtrim(description));
			command->options = init_options();
			command->nbr_options = 0;
		}
	}
	return (command);
}
