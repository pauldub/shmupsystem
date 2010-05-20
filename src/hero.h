class Hero
{
    public:
        Hero(CL_GraphicContext gc);
        // Setter methods
        void move(int move_x, int move_y);
        void powerup();
        void speedup();
        // Getter methods
        int get_x();
        int get_y();
        int get_power();
        int get_speed();

    private:
        int x;
        int y;
        int power;
        int speed;
};
