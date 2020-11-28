#include "XMLSerialaze.h"





void XMLSerialaze::save(const std::string FiLeName, TradeMap& TradeMapObj)
{
	std::ofstream XmlFile(FiLeName + ".xml");
	boost::archive::xml_oarchive Out_Archive(XmlFile);
	Out_Archive << BOOST_SERIALIZATION_NVP(TradeMapObj);
}
