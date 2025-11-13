# makefile for C-without-built-in functions
# hides warnings by default
# but also includes option ("loud")
# to display all of them

default: assembC.c
	gcc -w -o assembC.exe assembC.c

loud: assembC.c
	gcc -Wall -o assembC.exe assembC.c

clean: assembC.exe
	rm -f assembC.exe
