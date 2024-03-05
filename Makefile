gcc = gcc  
flags = -Werror -Wall -Wextra -std=c11
files = pong_interactive.c
out_file = pong

ifeq ($(shell uname -s), Linux)
	flags += -std=gnu99
endif

all: pong

pong:
	$(gcc) $(flags) $(files) -o $(out_file) -lncurses
	
clean:
	-rm $(out_file)

rebuild:
	make clean
	make all