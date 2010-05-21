namespace Input {
    class Keyboard {
        public:
            Keyboard (Renderer::Window window);
            virtual ~Keyboard ();

            bool get_keycode(int keycode);
    };
}
