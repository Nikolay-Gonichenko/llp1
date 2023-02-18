#ifndef TREE_HEADER_GENERATOR_H
#define TREE_HEADER_GENERATOR_H

#include <stdlib.h>
#include "tree_header_tools.h"
#include "../structs/tree_header.h"

struct tree_header;

void generate_empty_tree_header(char **pattern, uint32_t *types,size_t pattern_size, size_t *key_sizes, struct tree_header *header);

#endif
