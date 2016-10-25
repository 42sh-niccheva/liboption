/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_options.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:26 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:28 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"
#include <stdlib.h>

t_option	*init_options(void)
{
	t_option	*options;

	options = NULL;
	options = (t_option *)malloc(sizeof(t_option));
	if (options)
	{
		options->little_arg = NULL;
		options->long_arg = NULL;
		options->description = NULL;
		init_list(&(options->list));
	}
	return (options);
}
