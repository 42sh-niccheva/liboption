t_option	*init_options(void)
{
	t_option	*options;

	options = NULL;
	options = (t_option *)malloc(size_of(t_option *));
	if (options)
	{
		options->little_arg = NULL;
		options->long_arg = NULL;
		options->description = NULL;
		init_list(&(options->list));
	}
	return (options);
}