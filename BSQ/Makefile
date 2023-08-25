EXEC = bsq

SRC_DIR = ./src
BUILD_DIR = ./build
H_DIR = ./includes

CC = cc


PRODUCTION_FLAGS = -Wall -Wextra -Werror -Ofast
DEBUG_FLAGS = -g3 -O0

INC_FLAGS = -I$(H_DIR)

CFLAGS = $(INC_FLAGS)

# pick one
#CFLAGS += $(DEBUG_FLAGS)
CFLAGS += $(PRODUCTION_FLAGS)

LDFLAGS =

SRCS := $(shell find $(SRC_DIR) -name '*.c')
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

.PHONY: all
all: $(BUILD_DIR)/$(EXEC)

# Linking
$(BUILD_DIR)/$(EXEC): $(OBJS)
	@echo Linking
	@$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

# Compiling
$(BUILD_DIR)/%.c.o: %.c
	@echo "Compiling $<"
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	find $(BUILD_DIR) -name '*.o' -delete

.PHONY: fclean
fclean:
	rm -rf $(BUILD_DIR)

.PHONY: re
re: fclean $(BUILD_DIR)/$(EXEC)

.PHONY: run
run: $(BUILD_DIR)/$(EXEC)
	$(BUILD_DIR)/$(EXEC)
