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

class ShmupLoader
{
    public:
        static int main(const std::vector<CL_String> &args);
};

class ShmupGame
{
    public:
        void main();
        void update_game(CL_InputDevice keyboard);
        void update_display(CL_GraphicContext gc);
};

class ShmupHero
{
    public:
        ShmupHero(CL_GraphicContext gc);
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

class ShmupBullet
{
    public:
        ShmupBullet();
        bool active;
};

class ShmupBulletStack
{
    public:
        ShmupBulletStack();
        std::vector<ShmupBullet> stack;
        std::vector<int> stack_free;

        int add_bullet();
        void free_bullet(int id);
        ShmupBullet& get_bullet(int id);
        void iterate_bullets();
};
