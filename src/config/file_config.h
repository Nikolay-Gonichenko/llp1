#ifndef FILE_CONFIG_H
#define FILE_CONFIG_H

#define FILE_GRANULARITY 4
#define BIG_ENDIAN_SIGNATURE 0xFFFE

#define SINGLE_TUPLE_VALUE_SIZE 8

#define OFFSET_VALUE_SIZE 8

#define MIN_ID_ARRAY_SIZE 1
#define MINIMAL_TUPLE_SIZE 256

#define BUFFER_COMMAND_SIZE 256

#define BUFFER_FIELD_SIZE 1024


#define NULL_VALUE 0


#define BOOLEAN_TYPE 0
#define INTEGER_TYPE 1
#define FLOAT_TYPE 2
#define STRING_TYPE 3


#define AHASH 54059
#define BHASH 76963
#define CHASH 86969
#define INITHASH 37

#include "../managers/file_manager.h"

struct file_config {
    char *filename;
    uint8_t generator_flag;
    char *generator_filename;
};

struct file_config *new_file_config();

#endif
