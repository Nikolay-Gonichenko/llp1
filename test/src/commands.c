#define _CRT_SECURE_NO_WARNINGS
#include "../includes/commands.h"
#include "../includes/add_obj.h"
#include "../includes/create_type.h"
#include "../includes/get_obj.h"
#include "../includes/delete_obj.h"
#include "../includes/delete_type.h"
#include <string.h>

bool is_exit(char* command) {
	if (strcmp(command, "exit") == 0) {
		return true;
	}
	return false;
}

char* do_command(char* command, char* arg) {
	if (strcmp(command, "add_obj") == 0) {
		add_obj(arg);
	}
	if (strcmp(command, "delete_obj") == 0) {
		delete_obj(arg);
	}
	if (strcmp(command, "get_obj") == 0) {
		get_obj(arg);
	}
	if (strcmp(command, "create_type") == 0) {
		create_type(arg);
	}
	if (strcmp(command, "delete_type") == 0) {
		delete_type(arg);
	}
	return strcat(command, arg);
}

