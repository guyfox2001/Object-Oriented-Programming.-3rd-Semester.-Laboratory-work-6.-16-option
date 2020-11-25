#pragma once
#include <vector>
#include "Borders.h"


 
class GeoMap
{
public:
	GeoMap();
private:
	float SquareSize;
	std::vector<Borders> OurBorders;
};

