#include "main.hpp"

ShmupHero::ShmupHero(CL_GraphicContext gc)
{
    CL_Draw::fill(gc, CL_Rectf(240.0f, 140.0f, 440.0f, 340.0f), CL_Colorf(1.0f, 1.0f, 1.0f));
    this->speed = 0.5;
}

void ShmupHero::move(int move_x, int move_y)
{
    // TODO: restrict the boundary of movement.
    float speed_factor = 1 + (this->speed / 10);

    this->x = move_x * speed_factor;
    this->y = move_y * speed_factor;
}

void ShmupHero::powerup()
{
    // TODO: create powerup system
}

void ShmupHero::speedup(float factor)
{
    this->speed = this->speed + (this->speed * (factor * 10));
}

int ShmupHero::get_x()
{
    return this->x;
}

int ShmupHero::get_y()
{
    return this->y;
}

int ShmupHero::get_power()
{
    return this->power;
}

int ShmupHero::get_speed()
{
    return this->speed;
}
