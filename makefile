# makefile for G-- programming language functions
# hides warnings by default
# but also includes option ("loud")
# to display all of them

default: G--_Language.c
	gcc -w -o assembC.exe G--_Language.c

loud: G--_Language.c
	gcc -Wall -o assembC.exe G--_Language.c

clean: *.exe
	rm -f *.exe
