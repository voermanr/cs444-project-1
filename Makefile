clean:
	rm -f hellothread

all:
	gcc -Wall -Wextra -o -g $@ $< -lpthread

hellothread: hellothread.c
	gcc -Wall -Wextra -o -g $@ $< -lpthread
