#include "main.hpp"

ShmupBullet::ShmupBullet()
{
}

int ShmupBulletStack::add_bullet()
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
      ShmupBullet new_bullet;
      this->stack.push_back(new_bullet);
  }

  this->stack[id].active = true;
  return id;
}

void ShmupBulletStack::free_bullet(int id)
{
   this->stack[id].active = false;
   stack_free.push_back(id);
}
