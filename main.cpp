#include <iostream>

struct Tile
{
	int id;			// ID of tile
	int type;		// Type of tile, e.g. water, sand, grass, stone, etc.
	int posX;		// Position of tile in x direction
	int posY;		// Position of tile in y direction
	bool pass;	// passability of tile, true or false
};

int main()
{
	std::cout << "Hallo Welt!" << std::endl;
	return 0;
}
