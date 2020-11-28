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
const std::set<std::pair<int, int>>& Borders::get_coords()
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
Borders& Borders::make_rand_obj()
{
	static Borders random_obj;
	uint16_t brake= rand() % 50;
	for (int i = 0; i < brake; i++) {
		random_obj.add_coords(rand() % 1000 + 1, rand() % 1000 + 1);
	}
	return random_obj;
}
std::ostream& operator<<(std::ostream& out_stream, Borders& borders_obj)
{
	out_stream << "----------------Borders----------------\n";
	for (auto IT = borders_obj.OurCoords.begin(); IT != borders_obj.OurCoords.end(); IT++) {
		out_stream << IT->first << ' ' << IT->second << '\n';
	}
	out_stream << "----------------Borders----------------\n";
	return out_stream;
}
std::istream& operator>>(std::istream& in_stream, Borders& borders_obj)
{
	uint16_t _size;
	std::cout << "input size: \n";
	in_stream >> _size;
	borders_obj.size = _size;
	for (int i = 0, x, y; i < _size; i++) {
		in_stream >> x >> y;
		borders_obj.OurCoords.insert(std::make_pair(x, y));
	}
	return in_stream;
}
