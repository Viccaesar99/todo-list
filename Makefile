TARGET = todo

SRCS = main.cpp menu.cpp

OBJS = main.o menu.o

LIBS = menu.h

CXX = g++

# compila el programa principal
all: $(TARGET)

todo: $(OBJS)
	g++ $(OBJS) -o todo

main.o: main.cpp menu.h

menu.o: menu.cpp menu.h

clean:
	rm -rf $(TARGET) $(OBJS)
