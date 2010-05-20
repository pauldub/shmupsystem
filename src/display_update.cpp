#include "main.hpp"

void Game::update_display(CL_GraphicContext gc, Hero* hero)
{
    hero.redraw();
}
