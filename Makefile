all: pong

pong:
	g++ *.cpp -o pong -lSDL -Wall -lSDL_image -lSDL_net

clean:
	rm pong

run: pong
	./pong


