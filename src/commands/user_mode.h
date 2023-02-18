#ifndef USER_MODE_H
#define USER_MODE_H

#include "../crud_operations.h"
#include "../managers/file_manager.h"
#include <string.h>
#include "../tools/console_tools.h"
#include "add_command.h"
#include "find_command.h"
#include "remove_command.h"
#include "update_command.h"

int32_t interactive_mode(struct file_config *config);
int32_t generator_mode(char *filename, char *data_filename);

#endif
