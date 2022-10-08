#include "delete_obj.h"

/*
* Проверяет, не был ли ещё удалён объект
* @param путь до объекта
* return true, если объект не был ещё удалён
*/
static void is_active() {

}

/*
* Проверяет, существует ли такой объект
* @param путь до объекта
* return true, если такой объект есть
*/
static void is_exist() {
	is_active();
}

/*
* Помечает объект как неактивный
* @param путь до объекта
* return true если запись в файл прошла успешно
*/
static void make_inactive() {

}

void delete_obj(char* path) {
	is_exist();
	make_inactive();
}