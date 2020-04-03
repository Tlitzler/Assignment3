#include "Room.h"



Room::Room()
{
	walls = Walls();
	table = Table();
	chairs = Chairs();
	misc = Misc();
}


Room::~Room()
{
}

void Room::draw()
{
	walls.draw();
	table.draw();
	chairs.draw();
	misc.draw();
}
