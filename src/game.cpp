#include "game.h"

void Game::main()
{
    const int ticks_per_second = 60;
    const int skip_ticks = 1000 / ticks_per_second;
    int sleep_time = 0;
    size_t next_game_tick;

    Renderer::Window window("Hello World!",640, 480, true);
    Input::Keyboard *keyboard = new Input::Keyboard(window);
    Hero* hero = new Hero();

    next_game_tick = System::get_time();

    while(! keyboard->get_keycode(0))
    {
        update_game(hero);
        update_display(hero);
        window.flip();

        next_game_tick += skip_ticks;
        sleep_time = next_game_tick - System::get_time();
        if ( sleep_time >= 0 ) sleep(sleep_time);
    }

    delete keyboard;
    delete hero;
}

void Game::handle_input(Hero* hero)
{
}

void Game::update_game(Hero* hero)
{
    handle_input(hero);
}

void Game::update_display(Hero* hero)
{
    hero->redraw();
}
