#include <stddef.h>

#include "hero.h"

class Game
{
    public:
        void main();
        void update_game(Hero* hero);
        void update_display(Hero* hero);
        void handle_input(Hero* hero);
};
