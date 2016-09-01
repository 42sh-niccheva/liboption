#include "liboption.h"
#include <stdlib.h>

t_commands	*init_commands(void)
{
	t_commands	*commands;

	commands = NULL;
	commands = (t_commands *)malloc(sizeof(t_commands));
	if (commands)
	{
		commands->command = NULL;
		init_list(&(commands->list));
	}
	return (commands);
}
