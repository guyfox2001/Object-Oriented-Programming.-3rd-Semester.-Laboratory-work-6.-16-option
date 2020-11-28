#pragma once
#include <boost/serialization/vector.hpp>
#include "Borders.h"

 
class GeoMap
{
public:
	/*friend class XMLSerialaze;*/
	float& get_square();
	void set_square(float _Square_Size);
	void set_borders(std::vector<Borders>& seting_borders);
	const std::vector<Borders>& get_borders();
	void add(Borders& adding);
	void del(Borders& deleting);
//protected:
	float SquareSize;
	std::vector<Borders> OurBorders;
};

