CC = gcc
FLAGS = -Wall -Wextra
OUTPUT = infinite-monkey

main:
	${CC} ${FLAGS} main.c -o ${OUTPUT}

clear:
	rm -rf ${OUTPUT}
