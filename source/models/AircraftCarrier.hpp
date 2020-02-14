#ifndef AIRCRAFTCARRIER_HPP_
#define AIRCRAFTCARRIER_HPP_

#include "Ship.hpp"

class AircraftCarrier : public Ship {
public:
	// Constructor
	AircraftCarrier(std::string fleet_name) : Ship(fleet_name) {}

	// get_length
	const int get_length() const {
		return 5;
	}

	// maximum_pending_orders
	const int maximum_pending_orders() {
		return 2;
	}

	// can_perform_recon
	const bool can_perform_recon() const {
		return true;
	}

	// String
	friend std::ostream& operator<<(std::ostream& os, const AircraftCarrier& obj)
	{
		os << "AircraftCarrier" << obj.get_position_absolute() << obj.get_orientation();
		return os;
	}

protected:

private:

};

#endif // !AIRCRAFTCARRIER_HPP_
