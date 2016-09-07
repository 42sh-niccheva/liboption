NAME		=	liboption.a

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

DSOURCES	=	./sources/

DOBJECTS	=	objects/

BUILD		=	./build

INCLUDES	=	-I./includes
INCLUDES	+=	-I../liblist/includes
INCLUDES	+=	-I../libft/includes

SOURCES		=	new_command.c
SOURCES		+=	add_option_to.c
SOURCES		+=	details_of_command.c
SOURCES		+=	new_option.c
SOURCES		+=	init_options.c
SOURCES		+=	details_options_of_command.c
SOURCES		+=	init_commands.c
SOURCES		+=	add_command_to.c
SOURCES		+=	details_commands_of_collection.c
SOURCES		+=	option_exist.c
SOURCES		+=	is_active.c
SOURCES		+=	command_with_name.c

OBJECTS		=	$(patsubst %.c, $(BUILD)/$(DOBJECTS)%.o, $(SOURCES))

DEPS		=	$(patsubst %.c, $(BUILD)/$(DOBJECTS)%.d, $(SOURCES))

DEPENDS		=	-MT $@ -MD -MP -MF $(subst .o,.d,$@)

all: $(BUILD)/$(NAME)

$(BUILD)/$(NAME): $(OBJECTS)
	@echo "\n\033[0;32m$(NAME) compiled:\t\033[0;m\c"
	ar rcs $(BUILD)/$(NAME) $(OBJECTS)

-include $(OBJECTS:.o=.d)

$(BUILD)/$(DOBJECTS)%.o: $(DSOURCES)%.c
	@mkdir -p $(BUILD)/$(DOBJECTS)
	@echo "\033[0;32m$< compiled:\t\033[0;m\c"
	$(CC) $(CFLAGS) $(DEPENDS) -o $@ -c $< $(INCLUDES)

clean:
	@rm -rf $(BUILD)/$(DOBJECTS)

fclean: clean
	@rm -f $(BUILD)/$(NAME)
	@rm -rf $(BUILD)

re: fclean all

.PHONY: all clean fclean re
