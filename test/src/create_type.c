#include "../includes/create_type.h"
#include "../includes/template.h"

/*
* Вставляет шаблон в дерево шаблонов
* @param шаблон
* @param корень дерева
*/
static void put_template_into_tree() {

}

/*
* Записывает шаблон в файл
* @param имя файла
* @param шаблон
* return успешно ли прошла запись
*/
static void write_template_to_file() {

}

void create_type(char* name) {
	create_template();
	put_template_into_tree();
	write_template_to_file();
}

