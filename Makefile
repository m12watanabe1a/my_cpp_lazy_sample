# Makefile for building sample.exe from main.cc

# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Build directory
BUILD_DIR = build

# The target executable
TARGET = $(BUILD_DIR)/sample

# The source file
SRCS = main.cc

# Object files
OBJS = $(patsubst %.cc,$(BUILD_DIR)/%.o,$(SRCS))

# Default target
all: $(TARGET)

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Link the executable
$(TARGET): $(OBJS) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Compile source files into object files
$(BUILD_DIR)/%.o: %.cc | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean up build files
clean:
	rm -f $(TARGET) $(OBJS)

# Run Program
run: $(TAEGET)
	$(TARGET) | c++filt -t

# Phony targets
.PHONY: all clean run
