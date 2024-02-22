CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =
OBJFILES = printer.o main.o file_reader.o digits.o
TARGET = rush-02

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

fclean:
	rm -f $(OBJFILES) $(TARGET) *~
