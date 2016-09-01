#include "liboption.h"

void		add_option_to(t_command *command, t_option *option)
{
	if (command && option)
	{
		list_add_tail(&(option->list), &(command->options->list));
		command->nbr_options += 1;
	}
}
