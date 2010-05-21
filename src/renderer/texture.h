namespace Renderer
{
    struct section
    {
        GLfloat width_min;
        GLfloat width_max;
        GLfloat height_min;
        GLfloat height_max;
    }

    struct texture
    {
        GLuint texture;
        std::string filename;
        GLfloat width;
        GLfloat height;
    }

    struct texture_section
    {
        unsigned int texture_id;
        section section;
        GLfloat width;
        GLfloat height;
    }
}
