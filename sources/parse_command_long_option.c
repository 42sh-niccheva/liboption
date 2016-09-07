#include "liboption.h"

bool		parse_command_long_option(t_command *command, const char *option)
{
	int		value;

	value = true;
	if (option_exist(command, option + 2))
	{
		active_option_of_command(command, option);
	}
	else
		value = false;
	return (value);
}
