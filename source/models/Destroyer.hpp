#ifndef DESTROYER_HPP_
#define DESTROYER_HPP_

#include "Ship.hpp"

class Destroyer : public Ship {
public:
	// Constructor
	Destroyer(std::string fleet_name) : Ship(fleet_name) {}

	// get_length
	const int get_length() const {
		return 4;
	}

	// maximum_pending_orders
	const int maximum_pending_orders() {
		return 1;
	}

	// can_perform_recon
	const bool can_perform_recon() const {
		return false;
	}

protected:

private:

};

#endif // !DESTROYER_HPP_
