#include "liboption.h"

bool		parse_command(int argc, const char **argv, t_command *command)
{
	int			i;
	int			parse;

	i = 1;
	parse = true;
	if (command)
	{
		while (argv[i] && !ft_strequ(argv[i], ARGUMENT_STOPPER))
		{
			if (ft_strncmp(argv[i], LONG_OPT_PREFIX, 2))
				parse = parse_command_long_option(command, argv[i]);
			if (argv[i][0] == '-')
				parse = parse_command_little_option(command, argv[i]);
		}
		if (!parse)
		{
			ft_putstr_fd(argv[0], 2);
			ft_putendl_fd(": illegal option -- -", 2);
		}
	}
	else
		value = false;
	return parse;
}
