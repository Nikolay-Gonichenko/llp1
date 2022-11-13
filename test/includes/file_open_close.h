#pragma once
#include <stdbool.h>
#include <stdio.h>

/*
* Открывает файл
* @param file ссылка на файл
* @param path путь, по которому лежит файл
* @param mode режим открытия файла
* return true если файл успешно открыт
*/
bool open_file(FILE** file, char* path, char* mode);

/*
* Закрывает файл
* @param file ссылка на файл
* return true если файл успешно закрыт
*/
bool close_file(FILE* const* file);