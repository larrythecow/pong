all: pong

pong:
	g++ *.cpp -o pong -lSDL -Wall -lSDL_image

clean:
	rm pong

run: pong
	./pong


