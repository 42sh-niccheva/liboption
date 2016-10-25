/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:04 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:45:57 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

bool		parse_command(const char **argv, t_command *command)
{
	int			i;
	int			parse;

	i = 1;
	parse = true;
	if (!command)
		return (false);
	while (argv[i] && !ft_strequ(argv[i], ARGUMENT_STOPPER) && parse)
	{
		if (!ft_strncmp(argv[i], LONG_OPT_PREFIX, 2))
			parse = parse_command_long_option(command, argv[i]);
		else if (argv[i][0] == SHORT_OPT_PREFIX[0] && !argv[i][1])
			break ;
		else if (argv[i][0] == SHORT_OPT_PREFIX[0])
			parse = parse_command_little_option(command, argv[i]);
		++i;
	}
	if (!parse)
	{
		ft_putstr_fd(argv[0], 2);
		ft_putendl_fd(": illegal option -- -", 2);
	}
	return (parse);
}
