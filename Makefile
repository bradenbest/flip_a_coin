all:
	cd src && $(MAKE)
	mv src/flip-a-coin ./

clean:
	cd src && $(MAKE) clean

.PHONY: all clean
