#pragma once
#include <string>
#include<boost/archive/xml_oarchive.hpp>
class TradePoints
{
public:
	const std::string& getname();
	void set_name(std::string setting_name);
	const std::pair<int, int>& get_tc();
	void set_tc(int x, int y);
	static TradePoints& make_random_TP();

	std::string name;
	std::pair <int, int> trade_coords;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version);
};

template<class Archive>
inline void TradePoints::serialize(Archive& ar, const unsigned int version)
{
	ar & BOOST_SERIALIZATION_NVP(name);
	ar & BOOST_SERIALIZATION_NVP(trade_coords);
}
