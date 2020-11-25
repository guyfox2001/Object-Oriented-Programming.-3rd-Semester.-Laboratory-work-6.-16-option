#include "Borders.h"

Borders::Borders()
{
	this->OurCoords.clear();
	this->size = 0;
}

Borders::Borders(std::set<std::pair<int, int>>& CopyCoords)
{
		this->OurCoords = CopyCoords;
		this->size = CopyCoords.size();
}

void Borders::set_coords(std::set<std::pair<int, int>>& CopyCoords)
{
	this->OurCoords = CopyCoords;
	this->size = CopyCoords.size();
}

std::set<std::pair<int, int>>& Borders::get_coords()
{
	return this->OurCoords;
}

void Borders::add_coords(std::set<std::pair<int, int>>& AddingCoords)
{
	for (auto It = AddingCoords.begin(); It != AddingCoords.end(); It++) {
		this->OurCoords.insert(*It); this->size++;
	}
}

void Borders::add_coords(int x, int y)
{
	this->OurCoords.insert(std::make_pair(x, y)); this->size++;
}

void Borders::del_coords(int x, int y)
{
	this->OurCoords.erase(std::make_pair(x, y)); this->size--;
}

const uint16_t& Borders::get_size()
{
	return this->size;
}
