#include "game.h"

void Game::main()
{
    const int ticks_per_second = 25;
    const int skip_ticks = 1000 / ticks_per_second;
    int sleep_time = 0;
    size_t next_game_tick;

    Renderer::Window window("Hello World!",640, 480, true);

    // Alias some of the often used variables of window()
    Input::Keyboard *keyboard(window);

    next_game_tick = System::get_time();

    Hero* hero = new Hero(gc);

    while(! keyboard.get_keycode(KEY_ESCAPE))
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
    if(keyboard.get_keycode(KEY_UP))
    {
        hero.move(0,5);
    }

    if(keyboard.get_keycode(KEY_DOWN))
    {
        hero.move(0,-5);
    }
}

void Game::update_game(Hero* hero)
{
    handle_input(hero);
}

void Game::update_display(Hero* hero)
{
    hero->redraw();
}
