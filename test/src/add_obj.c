#include "../includes/add_obj.h"
#include "../includes/template.h"
#include "../includes/metaInfo.h"


/*
* ???????????? ???? ??????? ?? ????????????
* @param template ?????? ????????? ???????
* return ????? ???????-????????
*/
static void input_obj() {

}

/*
* ?????????? ?????? ? ????
* @param ?????? ? ???? ????????-????????
* @param ??? ?????
* return ??????? ?? ?????? ?????? ? ????
*/
static void write_obj_to_file() {

}

/*
* ??????? ?????????????? ?? ???????
* @param ?????? ? ???? ????????-????????
* return ?????????????? ?? ???????
*/
static void create_metaInfo_about_obj() {

}

/*
* ?????????? ?????????????? ?? ??????? ? ????
* @param ??????????????
* @param ??? ?????
* return ??????? ?? ?????? ?????? ? ????
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
