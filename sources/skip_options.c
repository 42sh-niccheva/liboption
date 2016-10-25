/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_options.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:42:47 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:42:49 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"

int		skip_options(const char **argv)
{
	int		i;

	i = 1;
	while (argv[i])
	{
		if (ft_strequ(argv[i], ARGUMENT_STOPPER))
			return (++i);
		else
		{
			if ((argv[i][0] == SHORT_OPT_PREFIX[0]
					|| !ft_strncmp(argv[i], LONG_OPT_PREFIX, 2)))
				++i;
			else
				return (i);
		}
	}
	return (i);
}
