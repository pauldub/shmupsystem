#include <vector>

#include "bullet.h"

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
