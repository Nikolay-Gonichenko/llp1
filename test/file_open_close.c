#define _CRT_SECURE_NO_WARNINGS
#include "file_open_close.h"

bool open_file(FILE** file, char* path, char* mode) {
    *file = fopen(path, mode);
    if (file == NULL) {
        return false;
    }
    return true;
}

bool close_file(FILE* const* file) {
    if (fclose(*file)) {
        return false;
    }
    return true;
}
