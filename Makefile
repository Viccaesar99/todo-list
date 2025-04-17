TARGET = todo

SRCS = main.cpp menu.cpp

OBJS = $(SRCS:.cpp=.o)

LIBS = menu.h

CXX = g++

# compila el programa principal
all: $(TARGET)

$(TARGET): $(OBJS)
	g++ $(OBJS) -o $(TARGET)
%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -rf $(TARGET) $(OBJS)
