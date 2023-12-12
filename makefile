main: eArray src/eArray.a
	gcc main.c -o main.out src/eArray.a

eArray: src/eArray.c
	gcc src/eArray.c -r -o src/eArray.a