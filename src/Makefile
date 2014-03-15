OBJS=main.o coin.o

all: $(OBJS)
	gcc $(OBJS) -o flip-a-coin

main.o: main.c
	gcc -c main.c
coin.o: coin.c coin.h
	gcc -c coin.c

clean:
	rm $(OBJS)

.PHONY: all clean
