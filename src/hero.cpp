#include "main.hpp"

Hero::Hero(CL_GraphicContext gc)
{
    CL_Draw::fill(gc, CL_Rectf(240.0f, 140.0f, 440.0f, 340.0f), CL_Colorf(1.0f, 1.0f, 1.0f));
    this->speed = 0.5;
}

void Hero::move(int move_x, int move_y)
{
    // TODO: restrict the boundary of movement.
    float speed_factor = 1 + (this->speed / 10);

    this->x = move_x * speed_factor;
    this->y = move_y * speed_factor;
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
