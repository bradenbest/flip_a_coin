all:
	cd src && $(MAKE)
	mv src/flip_a_coin ./

clean:
	cd src && $(MAKE) clean

.PHONY: all clean
