#include "add_obj.h"
#include "template.h"
#include "metaInfo.h"


/*
* осуществляет ввод объекта от пользователя
* @param template шаблон вводимого объекта
* return набор свойств-значения
*/
static void input_obj() {

}

/*
* Записывает объект в файл
* @param объект в виде свойство-значение
* @param имя файла
* return успешно ли прошла запись в файл
*/
static void write_obj_to_file() {

}

/*
* Создаёт метаинформацию об объекте
* @param объект в виде свойство-значение
* return метаинформация об объекте
*/
static void create_metaInfo_about_obj() {

}

/*
* Записывает метаинформацию об объекте в файл
* @param метаинформация
* @param имя файла
* return успешно ли прошла запись в файл
*/
static void write_metaInfo_to_file() {

}

void add_obj(char* path) {
	find_template(path);
	input_obj();
	write_obj_to_file();
	create_metaInfo_about_obj();
	write_metaInfo_to_file();
}