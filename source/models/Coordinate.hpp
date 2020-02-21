#ifndef COORDINATE_HPP_
#define COORDINATE_HPP_

#include<iostream>

// Coordinate class
class Coordinate {
public:
	// X coordinate
	int X;

	// Y coordinate
	int Y;

	// Constructor
	Coordinate(int x, int y);

	// Hashcode
	int hashCode();

	// String
	friend std::ostream& operator<<(std::ostream& os, const Coordinate& obj)
	{
		os << obj.X << "," << obj.Y;
		return os;
	}

	// Equals Operator
	bool operator==(const Coordinate& obj);
};

#endif // !COORDINATE_HPP_

