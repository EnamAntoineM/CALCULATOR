#
## MY_PROJECT, 2025
## Makefile
## PASSWD_MANAGER
## Author: Enam KODJOH-KPAKPASSOU
## Email: eakodjoh-kpakpassou@st.ug.edu.gh
## File description:
#



# Qt Application Makefile

# Compiler and flags
CXX = g++
CXXFLAGS = -I./include $(shell pkg-config --cflags Qt5Core Qt5Widgets Qt5Gui)
LDFLAGS = $(shell pkg-config --libs Qt5Core Qt5Widgets Qt5Gui)

# Directories
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
TARGET_DIR = .

# Create build directory if it doesn't exist
$(shell mkdir -p $(BUILD_DIR))

# Find all source files
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
# Generate object file names
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

# Name of the executable
TARGET = $(TARGET_DIR)/app

# MOC processing for Qt
MOC = moc
MOC_HEADERS = $(wildcard $(INCLUDE_DIR)/*.h)
MOC_SOURCES = $(patsubst $(INCLUDE_DIR)/%.h,$(BUILD_DIR)/moc_%.cpp,$(MOC_HEADERS))
MOC_OBJECTS = $(patsubst $(BUILD_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(MOC_SOURCES))

# Main target
all: $(TARGET)

# Linking the application
$(TARGET): $(OBJECTS) $(MOC_OBJECTS)
	$(CXX) -o $@ $^ $(LDFLAGS)

# Compile source files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Generate MOC source files
$(BUILD_DIR)/moc_%.cpp: $(INCLUDE_DIR)/%.h
	$(MOC) $(CXXFLAGS) $< -o $@

# Compile MOC sources
$(BUILD_DIR)/%.o: $(BUILD_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target (removes only intermediate files)
clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/moc_*.cpp
	rmdir $(BUILD_DIR) 2>/dev/null || true

# Full clean (removes everything including executable)
fclean: clean
	rm -f $(TARGET)

# Rebuild everything
re: fclean all

# PHONY targets
.PHONY: all clean fclean re
