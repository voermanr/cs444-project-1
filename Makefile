hellothread: hellothread.c
	gcc -Wall -Wextra -o $@ $< -lpthread

clean:
	rm -f hellothread

all:
	gcc -Wall -Wextra -o $@ $< -lpthread