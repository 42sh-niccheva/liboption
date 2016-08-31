# Liboption

First of all you need few libraries for that it works:
	https://github.com/42sh-niccheva/libft
	https://github.com/42sh-niccheva/liblist


```c
#include "liboption.h"

int		main()
{
	t_command	*command;
	command = new_command("ls",
			"List information about the FILEs (the current directory by default).");
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