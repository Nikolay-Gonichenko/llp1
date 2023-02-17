#ifndef TUPLE_H
#define TUPLE_H

#include <inttypes.h>
#include "../managers/file_manager.h"
#include "../managers/converter.h"



union tuple_header {
    struct {
        uint64_t parent;
        uint64_t alloc;
    };
    struct {
        uint64_t prev;
        uint64_t next;
    };
};

struct tuple {
    union tuple_header header;
    uint64_t *data;
};


enum file_read_status read_tuple(struct tuple **tuple, FILE *file, uint64_t pattern_size);
enum file_write_status write_tuple(FILE *file, struct tuple *tuple, size_t tuple_size);
void free_tuple(struct tuple *tuple);

#endif
