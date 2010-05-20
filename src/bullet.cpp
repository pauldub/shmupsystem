#include "main.hpp"

Bullet::Bullet()
{
}

int BulletStack::add_bullet()
{
    int id = -1;

    if(stack_free.size())
    {
        id = this->stack_free.back();
        this->stack_free.pop_back();
    }
    else
    {
        id = this->stack.size();
        Bullet new_bullet;
        this->stack.push_back(new_bullet);
    }

    this->stack[id].active = true;
    return id;
}

void BulletStack::free_bullet(int id)
{
    this->stack[id].active = false;
    stack_free.push_back(id);
}
