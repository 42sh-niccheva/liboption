#include "liboption.h"

void	details_of_command(t_command *command)
{
	ft_putendl("Command name");
	ft_putendl(command->name);
	ft_putendl("\nDescription");
	ft_putendl(command->description);
	ft_putendl("\nOptions");
	//details_options_of_command();
}
