class Game
{
    public:
        void main();
        void update_game(CL_InputDevice *keyboard);
        void update_display(CL_GraphicContext gc);
        void handle_input(CL_InputDevice *keyboard)
};
