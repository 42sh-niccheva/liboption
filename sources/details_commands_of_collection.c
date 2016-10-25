/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   details_commands_of_collection.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:43 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:45 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

void	details_commands_of_collection(t_commands *collection)
{
	t_list		*pos;
	t_commands	*commands;

	pos = (&(collection->list))->next;
	while (pos != &(collection->list))
	{
		commands = LIST_ENTRY(pos, t_commands, list);
		if (commands)
		{
			details_of_command(commands->command);
		}
		pos = pos->next;
	}
}
