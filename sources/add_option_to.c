/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_option_to.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:51 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:54 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

void		add_option_to(t_command *command, t_option *option)
{
	if (command && option)
	{
		list_add_tail(&(option->list), &(command->options->list));
		command->nbr_options += 1;
	}
}
