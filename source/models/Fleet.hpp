#ifndef FLEET_HPP_
#define FLEET_HPP_

#include "Ship.hpp"
#include "AircraftCarrier.hpp"
#include "Battleship.hpp"
#include "Destroyer.hpp"
#include "PTBoat.hpp"
#include "Submarine.hpp"

class Fleet {
public:
	// kRegionSize
	static const int kRegionSize = 20;

	// constructor
	Fleet(std:string name);

	// get_name
	const std::string& get_name() const;

	// set_name
	void set_name(const std::string& value);

	// get_region_x
	const int& get_region_x() const;

	// set_region_x
	void set_region_x(const int& value);

	// get_region_y
	const int& get_region_y() const;

	// set_region_y
	void set_region_y(const int& value);

	// get_aircraft_carrier
	const AircraftCarrier& get_aircraft_carrier() const;

	// set_aircraft_carrier
	void set_aircraft_carrier(const AircraftCarrier& value);

	// get_battleship
	const Battleship& get_battleship() const;

	// set_battleship
	void set_battleship(const Battleship& value);

	// get_destroyer
	const Destroyer& get_destroyer() const;

	// set_destroyer
	void set_destroyer(const Destroyer& value);

	// get_pt_boat
	const PTBoat& get_pt_boat() const;

	// set_pt_boat
	void set_pt_boat(const PTBoat& value);

	// get_submarine
	const Submarine& get_submarine() const;

	// set_submarine
	void set_submarine(const Submarine& value);

	// get_ships
	std::vector<Ship> get_ships();

	// get_ship_by_id
	Ship get_ship_by_id(std::string id);

	// String
	friend std::ostream& operator<<(std::ostream& os, const Fleet& obj)
	{
		os << obj.name_ << "\n";
		for (std::vector<Ship>::iterator it = obj.get_ships().begin(); it != obj.get_ships().end(); ++it) {
			os << *it << "\n";
		}
		return os;
	}

protected:

private:
	// name_
	std::string name_;

	// region_x_
	int region_x_;

	// region_y_
	int region_y_;

	// aircraft_carrier_
	AircraftCarrier		;

	// battleship_
	Battleship battleship_;

	// destroyer_
	Destroyer destroyer_;

	// pt_boat_
	PTBoat pt_boat_;

	// submarine_
	Submarine submarine_;

};

#endif // !FLEET_HPP_

