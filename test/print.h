#pragma once
#include <stdio.h>
#include <string.h>

/*
* выводит сообщение с просьбой ввести команду
*/
void ask_command();

/*
* выводит сообщение с просьбой ввести аргумент
* @param command команда, тк от неё зависит какой аргумент нужно запросить
*/
void ask_argument(char *command);

/*
* выводит сообщение о завершении программы
*/
void print_program_finished();

