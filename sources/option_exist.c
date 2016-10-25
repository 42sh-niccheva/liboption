/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_exist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:09 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:11 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

bool	option_exist(t_command *command, const char *argument)
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
				return (true);
			}
			pos = pos->next;
		}
	}
	return (false);
}
