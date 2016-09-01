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
