SOURCES=hangman.c main.c movement.c rps.c
OBJECTS=$(SOURCES:.c=.o)

program: $(OBJECTS)
	gcc $^ -o $@

%.o: %.c
	gcc $^ -c -o $@

clean:
	rm -fr *.o program

