#include "liboption.h"

static void	print_option(t_option *option)
{
	if (ft_strcmp(option->little_arg, ""))
	{
		ft_putstr(SHORT_OPT_PREFIX);
		ft_putstr(option->little_arg);
	}
	if (ft_strcmp(option->long_arg, ""))
	{
		if (ft_strcmp(option->little_arg, ""))
			ft_putstr(", ");
		ft_putstr(LONG_OPT_PREFIX);
		ft_putstr(option->long_arg);
	}
	ft_putchar('\n');
	if (ft_strcmp(option->description, ""))
		ft_putchar('\t');
	ft_putendl(option->description);
	ft_putchar('\n');
}

void	details_options_of_command(t_command *command)
{
	t_list		*pos;
	t_option	*option;

	pos = (&(command->options->list))->next;
	while (pos != &(command->options->list) && command->nbr_options)
	{
		option = LIST_ENTRY(pos, t_option, list);
		if (option)
		{
			print_option(option);
		}
		pos = pos->next;
	}
}
