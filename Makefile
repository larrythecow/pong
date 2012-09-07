CC=g++
CFLAGS = -c -Wall
LDFLAGS = -lSDL -lSDL_image
SOURCES = Ball.cpp cleanup.cpp init.cpp logic.cpp onEvent.cpp Pad.cpp pong.cpp render.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = pong


all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS) 

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(OBJECTS) $(EXECUTABLE)

run: pong
	./$(EXECUTABLE)


