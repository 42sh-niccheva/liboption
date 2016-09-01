# Liboption

First of all you need few libraries for that it works:
	  * https://github.com/42sh-niccheva/libft
	  * https://github.com/42sh-niccheva/liblist


```c
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
	t_command	*command;
	command = new_command("ls",
			"List information about the FILEs (the current directory by default).");
	add_option_to(command, new_option("-a", "--all",
									  "do not ignore entries starting with ."));
	add_option_to(command, new_option("", "--author",
									  "with -l, print the author of each file"));
	add_option_to(command, new_option("-C", "",
									  "list entries by columns"));
	if (command)
	{
		details_of_command(command);
	}
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