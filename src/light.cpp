#include <SFML/Graphics.hpp>

using namespace sf;


class Light{
public:
    Light(Vector2f _pos, int _width, int _length){
        pos = _pos;
        width = _width;
        length = _length;
    }




private:
    Vector2f pos;
    int width, length;

};