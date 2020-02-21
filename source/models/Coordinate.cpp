#include "Coordinate.hpp"

#include<iostream>
#include<boost/functional/hash.hpp>

// Constructor
Coordinate::Coordinate(int x, int y) : X(x), Y(y) {}

// Hashcode
int Coordinate::hashCode() {
	std::ostringstream buffer;
	boost::hash<std::string> string_hash;
	buffer << this->X << "," << this->Y;
	return string_hash(buffer.str());
}

// Equals Operator
bool Coordinate::operator==(const Coordinate& obj) {
	return (this->X == obj.X && this->Y == obj.Y);
}
