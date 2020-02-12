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
		return string_hash(temp.str());
	}

	// String
	std::ostream& operator<<(std::ostream& strm, const Coordinate& obj) {
		std::ostringstream buffer;
		buffer << this->X << "," << this->Y;
		return strm << buffer.str();
	}

	// Equals Operator
	bool operator==(Coordinate const& other) {
		if (other == null)
			return false;
		else
			return (this->X == other.X && this->Y == other.Y);
	}
};