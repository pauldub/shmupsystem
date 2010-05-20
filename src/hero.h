#include "entity.h"

class Hero : public Entity
{
    public:
        Hero();
        void move(int move_x, int move_y);
        void powerup();
        void speedup(float factor);
        int get_x();
        int get_y();
        int get_power();
        int get_speed();

        void redraw();

    private:
        int x;
        int y;
        int power;
        int speed;
};
