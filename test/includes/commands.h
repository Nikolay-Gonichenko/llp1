#pragma once
#include <stdbool.h>
#include <string.h>

/*
* выполняет команду
* @param command
* @param arg аргумент команды
* return что-то
*/
char* do_command(char* command, char* arg);

/*
* проверяет, является ли команда - командой выхода
*/
bool is_exit(char* command);

