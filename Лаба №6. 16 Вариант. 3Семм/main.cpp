#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include "TradeMap.h"
#include "XMLSerialaze.h"
using namespace std;

int main(int argc, char argv[]) {
	TradeMap OurMap;
	OurMap.OurBorders = OurMap.add_random_bordersList();
	OurMap.trade_points = OurMap.add_random_trade_pointsList();
	XMLSerialaze Serializator;
	Serializator.save("123", OurMap);


	return 0;
}