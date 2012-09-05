all: clean pong

pong:
	g++ *.cpp -o pong -lSDL -Wall

clean:
	rm pong

run: pong
	./pong


