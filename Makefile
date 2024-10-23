all:	clang_i cppcheck build valgrind

build:
	gcc -std=c11 -Wall -Werror -Wextra less.c

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem less.c

valgrind:
	valgrind --tool=memcheck --leak-check=yes ./a.out
clang_i:
	clang-format -i less.c

clang_n:
	clang-format -n less.c