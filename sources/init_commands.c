/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:30 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:45:08 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"
#include <stdlib.h>

t_commands		*init_commands(void)
{
	t_commands	*commands;

	commands = NULL;
	commands = (t_commands *)malloc(sizeof(t_commands));
	if (commands)
	{
		commands->command = NULL;
		init_list(&(commands->list));
	}
	return (commands);
}
