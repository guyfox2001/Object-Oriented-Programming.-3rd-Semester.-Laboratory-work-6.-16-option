#pragma once
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include"TradeMap.h"
#include <fstream>

class XMLSerialaze
{
public:
    /*friend class boost::serialization::access;*/
	void save(const std::string FiLeName, TradeMap& OBJ);
	void load(const std::string FiLeName, TradeMap& OBJ);
private:
	
};



