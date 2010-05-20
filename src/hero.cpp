#include "hero.h"

Hero::Hero()
{
    speed = 0.5;
}

void Hero::move(int move_x, int move_y)
{
    // TODO: restrict the boundary of movement.
    float speed_factor = 1 + (this->speed / 10);

    x += move_x * speed_factor;
    y += move_y * speed_factor;
}

void Hero::powerup()
{
}

void Hero::speedup(float factor)
{
    speed = speed + (speed * (factor * 10));
}

int Hero::get_x()
{
    return x;
}

int Hero::get_y()
{
    return y;
}

int Hero::get_power()
{
    return power;
}

int Hero::get_speed()
{
    return speed;
}

void Hero::redraw()
{
}
