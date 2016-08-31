#ifndef LIBOPTION_H
# define LIBOPTION_H

# include "list.h"
# include "libft.h"

typedef struct s_option		t_option;
typedef struct s_command	t_command;

struct		s_option
{
	char		*little_arg;
	char		*long_arg;
	char		*description;
	t_list		list;
};

struct		s_command
{
	char		*name;
	char		*description;
	t_option	*options;
};

t_command	*new_command(const char *name, const char *description);
t_option	*init_options(void);
void		details_of_command(t_command *command);

#endif
