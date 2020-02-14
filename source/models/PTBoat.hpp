#ifndef PTBOAT_HPP_
#define PTBOAT_HPP_

#include "Ship.hpp"

class PTBoat : public Ship {
public:
	// Constructor
	PTBoat(std::string fleet_name) : Ship(fleet_name) {}

	// get_length
	const int get_length() const {
		return 2;
	}

	// maximum_pending_orders
	const int maximum_pending_orders() {
		return 1;
	}

	// can_perform_recon
	const bool can_perform_recon() const {
		return false;
	}

	// String
	friend std::ostream& operator<<(std::ostream& os, const Destroyer& obj)
	{
		os << "PTBoat" << obj.get_position_absolute() << obj.get_orientation();
		return os;
	}

protected:

private:

};

#endif // !PTBOAT_HPP_
