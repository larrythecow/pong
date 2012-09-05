all: clean pong

pong:
	g++ main.cpp -o pong -lSDL -Wall

clean:
	rm pong

run: pong
	./pong


