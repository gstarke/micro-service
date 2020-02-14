#ifndef BATTLESHIP_HPP_
#define BATTLESHIP_HPP_

#include "Ship.hpp"

class Battleship : public Ship {
public:
	// Constructor
	Battleship(std::string fleet_name) : Ship(fleet_name) {}

	// get_length
	const int get_length() const {
		return 4;
	}

	// maximum_pending_orders
	const int maximum_pending_orders() {
		return 2;
	}

	// can_perform_recon
	const bool can_perform_recon() const {
		return false;
	}

	// String
	friend std::ostream& operator<<(std::ostream& os, const Battleship& obj)
	{
		os << "Battleship" << obj.get_position_absolute() << obj.get_orientation();
		return os;
	}

protected:

private:

};

#endif // !BATTLESHIP_HPP_
