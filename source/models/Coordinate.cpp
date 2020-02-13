#include<boost/functional/hash.hpp>

// Coordinate class
class Coordinate {
public:
	// x coordinate
	int X;

	// y coordinate
	int Y;

	// Constructor
	Coordinate(int x, int y)
	{
		this->X = x;
		this->Y = y;
	}

	// Hashcode
	int hashCode() {
		std::ostringstream buffer;
		boost::hash<std::string> string_hash;
		buffer << this->X << "," << this->Y;
		return string_hash(buffer.str());
	}

	// String
	friend std::ostream& operator<<(std::ostream& os, const Coordinate& obj);

	// Equals Operator
	bool operator==(const Coordinate &obj) {
		return (this->X == obj.X && this->Y == obj.Y);
	}
};

std::ostream& operator<<(std::ostream& os, const Coordinate& obj){
	os << obj.X << "," << obj.Y;
	return os;
}
