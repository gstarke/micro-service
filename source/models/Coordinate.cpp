#include "Coordinate.hpp"

#include<boost/functional/hash.hpp>

// Constructor
Coordinate::Coordinate(int x, int y)
{
	this->X = x;
	this->Y = y;
}

// Hashcode
int Coordinate::hashCode() {
	std::ostringstream buffer;
	boost::hash<std::string> string_hash;
	buffer << this->X << "," << this->Y;
	return string_hash(buffer.str());
}

// String
std::ostream& operator<<(std::ostream& os, const Coordinate& obj){
	os << obj.X << "," << obj.Y;
	return os;
}

// Equals Operator
bool Coordinate::operator==(const Coordinate& obj) {
	return (this->X == obj.X && this->Y == obj.Y);
}
