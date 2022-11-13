#include "../includes/print.h"

/*
* выбирает какое сообщение надо вывести для ввода аргумента команды
*/
static char* choose_arg(char* command) {
	if (strcmp(command, "add_obj") == 0) {
		return "Введите путь, куда хотите добавить объект";
	}
	if (strcmp(command, "delete_obj") == 0) {
		return "Введите путь до объекта, который хотите удалить";
	}
	if (strcmp(command, "get_obj") == 0) {
		return "Введите путь до объекта, который хотите вывести";
	}
	if (strcmp(command, "create_type") == 0) {
		return "Введите название новой сущности";
	}
	if (strcmp(command, "delete_type") == 0) {
		return "Введите название сущности, которую хотите удалить";
	}
	return NULL;
};


void ask_command() {
	printf("%s", "Введите команду:\n");
}

void ask_argument(char* command) {
	char* arg = choose_arg(command);
	printf("%s\n", arg);
}

void print_program_finished() {
	printf("\n%s\n", "Программа завершается");
}


