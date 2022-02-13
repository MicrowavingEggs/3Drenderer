SRC_DIR = SRC_DIR
BUILD_DIR = build/debug
CC = g++
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_NAME = run
INCLUDE_PATHS = -Iinclude
LIBRARY_PATHS = -Llib
LINKER_FLAGS = -lSDL2main -lSDL2

all:
	$(CC) $(LINKER_FLAGS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(SRC_FILES) -o $(BUILD_DIR)/$(OBJ_NAME)