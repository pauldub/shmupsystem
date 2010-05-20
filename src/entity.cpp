#include "entity.h"

void Entity::set_box(collision_box box)
{
    this->box = box;
}

bool Entity::collide(collision_box box_a, collision_box box_b)
{
    if(box_a.max_x < box_b.min_x) { return false; }
    if(box_a.min_x > box_b.max_x) { return false; }
    if(box_a.max_y < box_b.min_y) { return false; }
    if(box_a.min_y > box_b.max_y) { return false; }

    return true;
}
