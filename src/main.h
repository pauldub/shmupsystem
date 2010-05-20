#include <ClanLib/core.h>
#include <ClanLib/application.h>
#include <ClanLib/display.h>
#include <ClanLib/gl.h>
#include <iostream>

extern "C"
{
#include <lua.h>
#include <lualib.h>
}

class Loader
{
    public:
        static int main(const std::vector<CL_String> &args);
};

class Game
{
    public:
        void main();
        void update_game(CL_InputDevice *keyboard);
        void update_display(CL_GraphicContext gc);
        void handle_input(CL_InputDevice *keyboard)
};

class Hero
{
    public:
        Hero(CL_GraphicContext gc);
        // Setter methods
        void move(int move_x, int move_y);
        void powerup();
        void speedup();
        // Getter methods
        int get_x();
        int get_y();
        int get_power();
        int get_speed();

    private:
        int x;
        int y;
        int power;
        int speed;
};

class Bullet
{
    public:
        Bullet();
        bool active;
};

class BulletStack
{
    public:
        BulletStack();
        std::vector<Bullet> stack;
        std::vector<int> stack_free;

        int add_bullet();
        void free_bullet(int id);
        Bullet& get_bullet(int id);
        void iterate_bullets();
};
