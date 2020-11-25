#pragma once
#include <set>
class Borders
{
public:
	Borders();
	Borders(std::set < std::pair <int, int> >& CopyCoords);

	void set_coords(std::set < std::pair <int, int> >& CopyCoords);
	std::set < std::pair <int, int> >& get_coords();
	void add_coords(std::set < std::pair <int, int> >& AddingCoords);
	void add_coords(int x, int y);
	void del_coords(int x, int y);
	const uint16_t& get_size();
private:
	std::set < std::pair <int, int> > OurCoords;
	uint16_t size;
};

