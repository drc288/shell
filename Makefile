build:
	gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o shell
	./shell