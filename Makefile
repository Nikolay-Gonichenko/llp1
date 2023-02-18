CC=gcc
INCLUDES=-I./include
CFLAGS:=-O0 -Wall -Wextra $(INCLUDES)
DEBUG_CFLAGS:=-DDEBUG -g3

TARGET=main
TEST=test

SRC_DIR=src
TARGET_DIR=build
TEST_DIR=test

SOURCES  = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*/*.c)
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)

debug: CFLAGS += $(DEBUG_CFLAGS)
debug: $(TARGET)

test: $(TEST)

$(TEST): $(patsubst $(TARGET_DIR)/main.c,,$(SOURCES)) $(SOURCES) $(TEST_SRC)
	mkdir -p $(TARGET_DIR)/$(TEST_DIR)/$(REPORT_DIR)
	$(CC) $(CFLAGS) $(patsubst $(SRC_DIR)/main.c,,$(SOURCES)) $(TEST_SRC) -o $(TARGET_DIR)/$(TEST_DIR)/$@

build: $(SOURCES) $(TARGET)

$(TARGET): $(SOURCES)
	mkdir -p $(TARGET_DIR)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET_DIR)/$@

clean:
	rm -rf $(TARGET_DIR)

.PHONY: debug test build clean


