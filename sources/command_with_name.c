/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_with_name.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:48 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:50 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

t_command	*command_with_name(t_commands *collection, const char *name)
{
	t_list		*pos;
	t_commands	*commands;

	pos = (&(collection->list))->next;
	while (pos != &(collection->list))
	{
		commands = LIST_ENTRY(pos, t_commands, list);
		if (ft_strequ(commands->command->name, name))
		{
			return (commands->command);
		}
		pos = pos->next;
	}
	return (NULL);
}
