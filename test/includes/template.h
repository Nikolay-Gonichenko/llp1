#pragma once
enum node_type {
	OBJECT = 0,
	PRIMITIVE = 1
};

/*
* Структура шаблона
*/
#pragma pack(push, 1)
struct node {
	char* name;
	char* path;
	enum node_type type;
	struct node** childrens;
	char* value;

};
#pragma pack(pop)

/*
* находит шаблон по указаному пути в дереве
* @param template_path путь до шаблона
* return объект шаблона
*/
void find_template(char* template_path);

/*
* Создаёт шаблон
* @param имя шаблона
* return объект шаблона
*/
void create_template();