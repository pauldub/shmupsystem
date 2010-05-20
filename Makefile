EXAMPLE_BIN=main
LIBS=-lSDL
SOURCES=src/*
FLAGS=-Wall -Werror -pedantic

shmup:
	if [ ! -d output ]; then mkdir output ; fi
	$(CXX) $(CXXFLAGS) $(SOURCES) -o output/$@ $(LIBS) $(FLAGS)
clean:
	rm -rf output
