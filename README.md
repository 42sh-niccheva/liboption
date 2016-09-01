# Liboption

First of all you need few libraries for that it works:
###
	  * https://github.com/42sh-niccheva/libft
	  * https://github.com/42sh-niccheva/liblist


```c
struct			s_commands
{
	t_command	*command;
	t_list		list;
};

struct			s_command
{
	char		*name;
	char		*description;
	t_option	*options;
	int			nbr_options;
};

struct			s_option
{
	char		*little_arg;
	char		*long_arg;
	char		*description;
	t_list		list;
};
```

```c
#include "liboption.h"

int		main()
{
	t_commands	*collection_commands;
	t_command	*command1;
	t_command	*command2;

	collection_commands = init_commands();
	command1 = new_command("ls",
		"List information about the FILEs (the current directory by default).");
	add_option_to(command1, new_option("-a", "--all",
									  "do not ignore entries starting with ."));
	add_option_to(command1, new_option("", "--author",
									  "with -l, print the author of each file"));
	add_option_to(command1, new_option("-C", "",
									  "list entries by columns"));

	command2 = new_command("rm",
		"rm removes each specified file.  By default, it does not remove directories.");
	add_option_to(command2, new_option("-r", "--recursive",
									  "remove directories and their contents recursively"));
	add_option_to(command2, new_option("-f", "--force",
									  "ignore nonexistent files and arguments, never prompt"));

	add_command_to(collection_commands, command1);
	add_command_to(collection_commands, command2);
	details_commands_of_collection(collection_commands);

	return (0);
}
```

```
Command name
ls

Description
List information about the FILEs (the current directory by default).

Options
-a, --all
        do not ignore entries starting with .

--author
        with -l, print the author of each file

-C
        list entries by columns

Command name
rm

Description
rm removes each specified file.  By default, it does not remove directories.

Options
-r, --recursive
        remove directories and their contents recursively

-f, --force
        ignore nonexistent files and arguments, never prompt

```

```c
structs_cmd
{
	char*name;
	char*description;
	s_opt*opts;
};

structs_opt
{
	s_arg*little_arg;
	s_arg*long_arg;
	char*description;
	boolactive;
};

structs_arg
{
	char*name;
	boolwith_complement;
	s_cplt*complement;
};

structs_cplt
{
	char*name;
};
```