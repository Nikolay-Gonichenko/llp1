#pragma once
#include <stdint.h>

enum obj_status {
	ACTIVE = 0,
	DELETED = 1
};

struct metaInfo {
	char* path;
	enum obj_status status;
	uint32_t offset;
};