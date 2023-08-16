#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main(){
	RenderWindow window(VideoMode(500, 500), "shadow", Style::Titlebar | Style::Close);
	window.setFramerateLimit(60);
	Vertex line[2];
	line[0].position = Vector2f(0, 0);
	line[0].color = Color::Red;
	line[1].position = Vector2f(300, 300);
	line[1].color = Color::Red;
	window.display();
	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
			if (event.type == Event::Closed){
				window.close();
			}
		}
		window.clear(Color::White);
		window.draw(line, 2, Lines);
		window.display();
	}	
	return 0;
}
