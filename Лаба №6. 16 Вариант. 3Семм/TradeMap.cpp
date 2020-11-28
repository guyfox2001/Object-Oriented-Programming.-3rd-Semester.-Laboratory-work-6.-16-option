#include "TradeMap.h"

std::ostream& operator<<(std::ostream& out_stream, TradeMap& map_obj)
{

    out_stream << "----------------TradeMAp Borders----------------\n";
    for (auto IT = map_obj.OurBorders.begin(); IT != map_obj.OurBorders.end(); IT++) {
        out_stream << *IT;
    }
    out_stream << "----------------TradeMAp Borders----------------\n";
    out_stream << "--------------TradeMAp TradePoints--------------\n";
    for (auto IT = map_obj.trade_points.begin(); IT != map_obj.trade_points.end(); IT++) {
        out_stream << "--------------TradePoints--------------\n";
        out_stream << IT->getname() << '\n';
        out_stream << IT->get_tc().first  << ' ' << IT->get_tc().second << '\n';
        out_stream << "--------------TradePoints--------------\n";
    }
    out_stream << map_obj.SquareSize;
    return out_stream;
}

std::vector<Borders>& TradeMap::add_random_bordersList()
{
    static std::vector<Borders> Obj;
    uint16_t brake = rand()% 50 +1;
    for (int i = 0; i < brake; i++) {
        Obj.push_back(Borders::make_rand_obj());
    }
    return Obj;
}

std::vector<TradePoints>& TradeMap::add_random_trade_pointsList()
{
    static std::vector<TradePoints> Obj;
    uint16_t brake = rand() % 50 + 1;
    for (int i = 0; i < brake; i++) {
        Obj.push_back(TradePoints::make_random_TP());
    }
    return Obj;
}
