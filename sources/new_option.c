/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 08:43:13 by llapillo          #+#    #+#             */
/*   Updated: 2016/10/25 08:43:15 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liboption.h"
#include <stdlib.h>

t_option	*new_option(const char *little_arg, const char *long_arg,
						const char *description)
{
	t_option	*option;

	option = NULL;
	if (little_arg && long_arg && description)
	{
		option = (t_option *)malloc(sizeof(t_option));
		if (option)
		{
			option->little_arg = ft_strdup(ft_strtrim(little_arg));
			option->long_arg = ft_strdup(ft_strtrim(long_arg));
			option->description = ft_strdup(ft_strtrim(description));
			option->active = false;
			init_list(&(option->list));
		}
	}
	return (option);
}
