#include "liboption.h"

void	details_commands_of_collection(t_commands *collection)
{
	t_list		*pos;
	t_commands	*commands;

	pos = (&(collection->list))->next;
	while (pos != &(collection->list))
	{
		commands = LIST_ENTRY(pos, t_commands, list);
		if (commands)
		{
			details_of_command(commands->command);
		}
		pos = pos->next;
	}
}
