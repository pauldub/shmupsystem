EXAMPLE_BIN=main
LIBS=clanApp clanCore clanDisplay clanGL
SOURCES=src/*

shmup:
	if [ ! -d output ]; then mkdir output ; fi
	$(CXX) $(CXXFLAGS) $(SOURCES) -o output/$@ `pkg-config --libs $(patsubst %,%-2.0,$(LIBS))` `pkg-config --cflags $(patsubst %,%-2.0,$(LIBS))` -lpthread -Wall -Werror
clean:
	rm -rf output
