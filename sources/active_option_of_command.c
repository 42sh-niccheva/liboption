/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   active_option_of_command.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:44:06 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:44:46 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

void	active_option_of_command(t_command *command, const char *arg)
{
	t_list		*pos;
	t_option	*option;

	pos = (&(command->options->list))->next;
	while (pos != &(command->options->list) && command->nbr_options)
	{
		option = LIST_ENTRY(pos, t_option, list);
		if (ft_strequ(option->little_arg, arg)
			|| ft_strequ(option->long_arg, arg))
		{
			option->active = true;
			break ;
		}
		pos = pos->next;
	}
}
