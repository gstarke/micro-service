#ifndef AIRCRAFTCARRIER_HPP_
#define AIRCRAFTCARRIER_HPP_

#include "Ship.hpp"

class AircraftCarrier : public Ship {
public:
	// Constructor
	AircraftCarrier(std::string fleet_name) : Ship(fleet_name) {}

	// maximum_pending_orders
	const int maximum_pending_orders() {
		return 2;
	}

	// can_perform_recon
	const bool can_perform_recon() const {
		return true;
	}

protected:
	// get_length
	const int get_length() const {
		return 5;
	}

private:

};

#endif // !AIRCRAFTCARRIER_HPP_
