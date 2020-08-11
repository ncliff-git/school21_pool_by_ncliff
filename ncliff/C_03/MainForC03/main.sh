#!>/bin/sh


clear

Norminette -R CheckForbiddenSourceHeader ex00 ex01 ex02 ex03 ex04 ex05

cp mainEX00.c ../ex00/mainEX00.c
cp mainEX01.c ../ex01/mainEX01.c
cp mainEX02.c ../ex02/mainEX02.c
cp mainEX03.c ../ex03/mainEX03.c
cp mainEX04.c ../ex04/mainEX04.c
cp mainEX05.c ../ex05/mainEX05.c

cd ../ex00
gcc -Wall -Wextra -Werror *
./a.out

cd ../ex01
gcc -Wall -Wextra -Werror *
./a.out

cd ../ex02
gcc -Wall -Wextra -Werror *
./a.out

cd ../ex03
gcc -Wall -Wextra -Werror *
./a.out

cd ../ex04
gcc -Wall -Wextra -Werror *
./a.out

cd ../ex05
gcc -Wall -Wextra -Werror *
./a.out