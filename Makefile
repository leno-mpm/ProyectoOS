GCC = gcc
COMP = juego.o main.o pistas.o

programa: $(COMP) pistas.h juego.h
	$(GCC) $(COMP) -o programa

main.o: main.c
	$(GCC) -c main.c

juego.o: juego.c
	$(GCC) -c juego.c

pistas.o: pistas.c
	$(GCC) -c pistas.c

.PHONY: clean
clean:
	rm *.o programa
