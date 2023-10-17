CMP=gcc
SRC_DIR=src
BUILD_DIR=build

$(BUILD_DIR)/suma-matrica: $(SRC_DIR)/main.c
	$(CMP) $(SRC_DIR)/main.c -o $(BUILD_DIR)/suma-matrica