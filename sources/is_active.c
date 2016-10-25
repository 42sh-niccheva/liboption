/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_active.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:21 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:24 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

bool	is_active(t_command *command, char *argument)
{
	t_list		*pos;
	t_option	*option;

	if (command->nbr_options)
	{
		pos = (&(command->options->list))->next;
		while (pos != &(command->options->list))
		{
			option = LIST_ENTRY(pos, t_option, list);
			if (option && (ft_strequ(option->little_arg, argument)
						|| ft_strequ(option->long_arg, argument)))
			{
				return (option->active);
			}
			pos = pos->next;
		}
	}
	return (false);
}
