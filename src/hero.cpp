#include "hero.h"

Hero::Hero()
{
    this->speed = 0.5;
}

void Hero::move(int move_x, int move_y)
{
    // TODO: restrict the boundary of movement.
    float speed_factor = 1 + (this->speed / 10);

    this->x += move_x * speed_factor;
    this->y += move_y * speed_factor;
}

void Hero::powerup()
{
}

void Hero::speedup(float factor)
{
    this->speed = this->speed + (this->speed * (factor * 10));
}

int Hero::get_x()
{
    return this->x;
}

int Hero::get_y()
{
    return this->y;
}

int Hero::get_power()
{
    return this->power;
}

int Hero::get_speed()
{
    return this->speed;
}
