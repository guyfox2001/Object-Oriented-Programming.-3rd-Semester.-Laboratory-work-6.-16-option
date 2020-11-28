#include "TradePoints.h"

const std::string& TradePoints::getname()
{
	return this->name;
}

void TradePoints::set_name(std::string setting_name)
{
	this->name = setting_name;
}

const std::pair<int, int>& TradePoints::get_tc()
{
	return this->trade_coords;
}

void TradePoints::set_tc(int x, int y)
{
	this->trade_coords.first = x; this->trade_coords.second = y;
}

TradePoints& TradePoints::make_random_TP()
{
	static TradePoints Obj;
	Obj.set_name( "RandomName");
	Obj.set_tc(rand() % 1000 + 1, rand() % 1000 + 1);
	return Obj;
}
