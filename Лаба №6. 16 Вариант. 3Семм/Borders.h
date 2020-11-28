#pragma once
#include<boost/archive/xml_oarchive.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/utility.hpp>
#include <set>
#include <iostream>



class Borders
{
public:
	Borders();
	Borders(std::set < std::pair <int, int> >& CopyCoords);
	/*friend class boost::serialization::access;*/
	void set_coords(std::set < std::pair <int, int> >& CopyCoords);
	const std::set < std::pair <int, int> >& get_coords();
	void add_coords(std::set < std::pair <int, int> >& AddingCoords);
	void add_coords(int x, int y);
	void del_coords(int x, int y);
	const uint16_t& get_size();
	friend std::ostream& operator<< (std::ostream& out_stream, Borders& borders_obj);
	friend std::istream& operator>> (std::istream& in_stream, Borders& borders_obj);
	static Borders& make_rand_obj();
//private:
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version);
	std::set < std::pair <int, int> > OurCoords;
	uint16_t size;
};

template<class Archive>
inline void Borders::serialize(Archive& ar, const unsigned int version)
{
	ar << BOOST_SERIALIZATION_NVP(OurCoords);
	ar << BOOST_SERIALIZATION_NVP(size);
}
