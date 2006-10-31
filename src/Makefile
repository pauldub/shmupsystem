EXAMPLE_BIN=main
OBJF = shmup.o
LIBS=clanApp clanCore clanDisplay clanGL
SOURCES=main.cpp game_update.cpp display_update.cpp hero.cpp bullet.cpp

shmup:
	  $(CXX) $(CXXFLAGS) $(SOURCES) -o $@ `pkg-config --libs $(patsubst %,%-2.0,$(LIBS))` `pkg-config --cflags $(patsubst %,%-2.0,$(LIBS))` -lpthread -Wall -Werror
clean:
	  rm -rf shmup *.o
