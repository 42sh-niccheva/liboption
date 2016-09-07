#ifndef LIBOPTION_H
# define LIBOPTION_H

# include "list.h"
# include "libft.h"
# include <stdbool.h>

# define SHORT_OPT_PREFIX "-"
# define LONG_OPT_PREFIX "--"
# define ARGUMENT_STOPPER "--"

typedef struct s_option		t_option;
typedef struct s_command	t_command;
typedef struct s_commands	t_commands;

struct		s_option
{
	char		*little_arg;
	char		*long_arg;
	char		*description;
	bool		active;
	t_list		list;
};

struct		s_command
{
	char		*name;
	char		*description;
	t_option	*options;
	size_t		nbr_options;
};

struct		s_commands
{
	t_command	*command;
	t_list		list;
};

void		add_command_to(t_commands *collection_commands, t_command *command);
void		details_commands_of_collection(t_commands *collection);
t_commands	*init_commands(void);

void		add_option_to(t_command *command, t_option *option);
void		details_of_command(t_command *command);
t_command	*command_with_name(t_commands *collection, const char *name);
t_command	*new_command(const char *name, const char *description);

void		details_options_of_command(t_command *command);
t_option	*init_options(void);
bool		is_active(t_command *command, char *argument);
t_option	*new_option(const char *little_arg, const char *long_arg,
						const char *description);
bool		option_exist(t_command *command, char *argument);

#endif
