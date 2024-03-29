#ifndef LIST_H
#define LIST_H

#include "tuple.h"



struct uint64_list{
    uint64_t value;
    struct uint64_list *next;
};

struct result_list_tuple {
    struct tuple *value;
    struct result_list_tuple *next;
};



void append_to_uint64_list(uint64_t id, struct uint64_list **result);
void free_uint64_list(struct uint64_list *result);
void append_to_result_list(struct tuple **tuple_to_add, struct result_list_tuple **result);
void free_result_list(struct result_list_tuple *result);

#endif
