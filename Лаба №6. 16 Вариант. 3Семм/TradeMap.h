#pragma once
#include "GeoMap.h"
#include"TradePoints.h"
class TradeMap :
    public GeoMap
{
public:
    friend class boost::serialization::access;
    static std::vector<Borders>& add_random_bordersList();
    static std::vector<TradePoints>& add_random_trade_pointsList();
   friend std::ostream& operator<< (std::ostream& out_stream, TradeMap& map_obj);
   friend std::istream& operator>> (std::ostream& out_stream, TradeMap& map_obj);
//private:
   template<class Archive>
   void serialize(Archive& ar, const unsigned int version);
    std::vector< TradePoints> trade_points;
};

template<class Archive>
inline void TradeMap::serialize(Archive& ar, const unsigned int version)
{
    ar << BOOST_SERIALIZATION_NVP(OurBorders);
    ar << BOOST_SERIALIZATION_NVP(SquareSize);
    ar << BOOST_SERIALIZATION_NVP(trade_points);
}
