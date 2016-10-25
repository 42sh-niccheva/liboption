/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_command_to.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:58 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:44:04 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

void		add_command_to(t_commands *collection_commands, t_command *command)
{
	t_commands	*new_elem;

	if (collection_commands && command)
	{
		new_elem = init_commands();
		if (new_elem)
		{
			new_elem->command = command;
			list_add_tail(&(new_elem->list), &(collection_commands->list));
		}
	}
}
