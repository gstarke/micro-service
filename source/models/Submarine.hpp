#ifndef SUBMARINE_HPP_
#define SUBMARINE_HPP_

#include "Ship.hpp"

class Submarine : public Ship {
public:
	// Constructor
	Submarine(std::string fleet_name) : Ship(fleet_name) {}

	// get_length
	const int get_length() const {
		return 3;
	}

	// maximum_pending_orders
	const int maximum_pending_orders() {
		return 1;
	}

	// can_perform_recon
	const bool can_perform_recon() const {
		return true;
	}

	// String
	friend std::ostream& operator<<(std::ostream& os, const Destroyer& obj)
	{
		os << "Submarine" << obj.get_position_absolute() << obj.get_orientation();
		return os;
	}

protected:

private:

};

#endif // !SUBMARINE_HPP_
