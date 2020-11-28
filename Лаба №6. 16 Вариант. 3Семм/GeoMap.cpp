#include "GeoMap.h"

 float& GeoMap::get_square()
{
	return this->SquareSize;
}

void GeoMap::set_square(float _Square_Size)
{
	this->SquareSize = _Square_Size;
}

void GeoMap::set_borders(std::vector<Borders>& seting_borders)
{
	this->OurBorders = seting_borders;
}

const std::vector<Borders>& GeoMap::get_borders()
{
	return this->OurBorders;
}

void GeoMap::add(Borders& adding)
{
	this->OurBorders.push_back(adding);
}

void GeoMap::del(Borders& deleting)
{
	for (auto IT = this->OurBorders.begin(); IT != this->OurBorders.end(); IT++) 
		if (IT->get_coords() == deleting.get_coords())
			this->OurBorders.erase(IT);
}
