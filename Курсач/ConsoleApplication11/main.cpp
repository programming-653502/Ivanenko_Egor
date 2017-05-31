//Main

#include <iostream>
#include <vector>
#include <Windows.h>

#include "Piece.h"
#include "Game.h"
#include "Drawer.h"
#include "Random.h"
#include "menu.h"


int main()
{
	FreeConsole();
	sf::RenderWindow window(sf::VideoMode(1376, 768), "15-Puzzle");
	menu(window);
	Game g;
	Drawer d;
	Random r;
	g.GetEmptyPiece();
	for (int i = 0; i < 1000; ++i)
	{
		r.Randomize(g.my_map, g);
	}
	d.DrawField(g.my_map, g);
	return 0;
}