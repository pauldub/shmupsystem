struct collision_box
{
    int min_x;
    int min_y;
    int max_x;
    int max_y;
};

class Entity {
    public:
        Entity();

        collision_box get_box();
        void set_box(collision_box box);

        static bool collide(collision_box box_a, collision_box box_b);

    private:
        collision_box box;
};
