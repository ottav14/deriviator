# Compiler
CC = g++
CFLAGS = -std=c++11 -Wall

# Directories
SRCDIR = src
INCDIR = include
BINDIR = bin

# Source files
SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/Function.cpp
# Object files
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(BINDIR)/%.o)
# Header files
HEADERS = $(INCDIR)/Function.h

# Executable
EXECUTABLE = out

# Target: all (default target)
all: $(EXECUTABLE)

# Link object files to create the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(BINDIR)/$(EXECUTABLE)

# Compile source files into object files
$(BINDIR)/%.o: $(SRCDIR)/%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# Target: clean (remove object files and executable)
clean:
	rm -f $(BINDIR)/*.o $(BINDIR)/$(EXECUTABLE)

# Target to build and run the application
run: $(EXECUTABLE)
	./$(BINDIR)/$(EXECUTABLE)
