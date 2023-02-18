#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include "../structs/tree_header.h"
#include "../tools/tree_header_generator.h"
#include <stdio.h>
#include <inttypes.h>

enum file_read_status {
    READ_OK = 0,
    READ_END_OF_FILE,
    READ_INVALID
};


enum file_write_status {
    WRITE_OK = 0,
    WRITE_WRONG_INTEGRITY,
    WRITE_INVALID
};


enum file_open_status {
    OPEN_OK = 0,
    OPEN_FAILED,
    OPEN_NEW
};

enum file_read_status read_from_file(void *buffer, FILE *file, size_t size);


enum file_write_status write_to_file(void *buffer, FILE *file, size_t size);


enum file_open_status open_exist_file(char *filename, FILE **file);


enum file_open_status open_new_file(char *filename, FILE **file);


enum file_open_status open_empty_file(char *filename, FILE **file);
void close_file(FILE *file);
enum file_open_status open_file_write(char *filename, FILE **file);



enum file_write_status init_empty_file(FILE *file, char **pattern, uint32_t *types, size_t pattern_size, size_t *key_sizes);
enum file_open_status open_file_anyway(FILE **file, char *filename);

#endif
