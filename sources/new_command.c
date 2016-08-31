#include "liboption.h"
#include <stdlib.h>

t_command	*new_command(const char *name, const char *description)
{
	t_command	*command;

	command = NULL;
	if (name)
	{
		command = (t_command *)malloc(sizeof(t_command *));
		if (command)
		{
			command->name = ft_strdup(name);
			command->description = ft_strdup(description);
			command->options = NULL;
		}
	}
	return (command);
}
