##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##

# Variables
SRC     = $(wildcard *.cpp) $(shell find ./src -name '*.cpp')  # Source files in root and ./src
OBJ     = $(SRC:.cpp=.o)                                     # Object files (updated extension from .c to .cpp)
NAME    = MYPWD                                             # Executable name
CC      = g++                                                # Compiler (changed from clang to g++)
CFLAGS  = -Wall -Wextra -Werror -I./include -Wno-error       # Compiler flags
HEADERS = $(shell find -name '*.h')                          # Dynamically find all header files
LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm # Linker flags

# Default target
all: $(NAME)

# Build executable
$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

# Compile source files into object files
%.o: %.cpp $(HEADERS)                                       # Updated from %.c to %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean targets
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Mark non-file targets as phony
.PHONY: all clean fclean re

