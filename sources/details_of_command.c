/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   details_of_command.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:38 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:41 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

void	details_of_command(t_command *command)
{
	ft_putendl("Command name");
	ft_putendl(command->name);
	ft_putendl("\nDescription");
	ft_putendl(command->description);
	if (command->nbr_options > 0)
	{
		ft_putendl("\nOptions");
		details_options_of_command(command);
	}
}
