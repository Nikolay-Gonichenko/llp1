#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include "commands.h"
#include "print.h"

int main(int args, char** argv) {

	setlocale(LC_ALL, "Rus");

	while (true) {
		ask_command();
		char command[50];
		scanf("%s", command);
		if (is_exit(command)) {
			print_program_finished();
			return 0;
		} else {
			ask_argument(command);
			char argument[50];
			scanf("%s", argument);
			printf("%s", do_command(command, argument));
		}
		
	}

	
}