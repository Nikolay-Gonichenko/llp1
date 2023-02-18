#define TEST_FILENAME "test.bigdata"

#include "../src/crud_operations.h"
#include "../src/managers/file_manager.h"
#include <stdio.h>

int main(int argc, char** argv) {
    printf("123\n");
    return 0;
}

FILE *init_bigdata_file(){
    FILE *file;
    open_new_file(TEST_FILENAME, &file);
    return file;
}
void close_bigdata_file(FILE *file){
    close_file(file);
    remove(TEST_FILENAME);
}
