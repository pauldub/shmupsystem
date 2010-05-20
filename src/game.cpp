#include "game.h"

void Game::main()
{
    const int ticks_per_second = 25;
    const int skip_ticks = 1000 / ticks_per_second;
    int sleep_time = 0;
    std::size_t next_game_tick;
    // Setup some of the clanlib modules.
    CL_SetupCore      setup_core;
    CL_SetupDisplay   setup_display;
    CL_SetupGL        setup_gl;

    // Create the window
    CL_DisplayWindow  window("Hello World!",640,480);

    // Alias some of the often used variables of window()
    CL_InputDevice        *keyboard = window.get_ic().get_keyboard();
    CL_GraphicContext     gc = window.get_gc();

    gc.clear(CL_Colorf::gray10);
    next_game_tick = CL_System::get_time();

    Hero* hero = new Hero(gc);

    while(! keyboard.get_keycode(CL_KEY_ESCAPE))
    {
        update_display(gc, hero&);
        update_game(keyboard&);
        window.flip();

        next_game_tick += skip_ticks;
        sleep_time = next_game_tick - CL_System::get_time();
        if ( sleep_time >= 0 ) sleep(sleep_time);
    }

    free(keyboard);
    free(hero);
}

void Game::handle_input(CL_InputDevice *keyboard)
{
    if(keyboard.get_keycode(CL_KEY_UP))
    {
        hero.move(0,5);
    }

    if(keyboard.get_keycode(CL_KEY_DOWN))
    {
        hero.move(0,-5);
    }
}

void Game::update_game(CL_InputDevice keyboard*)
{
    handle_input(&keyboard);
}

void Game::update_display(CL_GraphicContext gc, Hero* hero)
{
    hero.redraw();
}
