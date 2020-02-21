#include "Fleet.hpp"

// constructor
Fleet::Fleet(std:string name) : name_(name) {
}

// get_name
const std::string& Fleet::get_name() const {
	return this->name_;
}

// set_name
void Fleet::set_name(const std::string& value) {
	this->name_.assign(value);
}

// get_region_x
const int& Fleet::get_region_x() const {
	return this->region_x_;
}

// set_region_x
void Fleet::set_region_x(const int& value) {
	this->region_x_ = value;
}

// get_region_y
const int& Fleet::get_region_y() const {
	return this->region_y_;
}

// set_region_y
void Fleet::set_region_y(const int& value) {
	this->region_y_ = value;
}

// get_aircraft_carrier
const AircraftCarrier& Fleet::get_aircraft_carrier() const {
	return this->aircraft_carrier_;
}

// set_aircraft_carrier
void Fleet::set_aircraft_carrier(const AircraftCarrier& value) {
	this->aircraft_carrier_ = value;
}

// get_battleship
const Battleship& Fleet::get_battleship() const {
	return this->battleship_;
}

// set_battleship
void Fleet::set_battleship(const Battleship& value) {
	this->battleship_ = value;
}

// get_destroyer
const Destroyer& Fleet::get_destroyer() const {
	return this->destroyer_;
}

// set_destroyer
void Fleet::set_destroyer(const Destroyer& value) {
	this->destroyer_ = value;
}

// get_pt_boat
const PTBoat& Fleet::get_pt_boat() const {
	return this->pt_boat_;
}

// set_pt_boat
void Fleet::set_pt_boat(const PTBoat& value) {
	this->pt_boat_ = value;
}

// get_submarine
const Submarine& Fleet::get_submarine() const {
	return this->submarine_;
}

// set_submarine
void Fleet::set_submarine(const Submarine& value) {
	this->submarine_ = value;
}

// get_ships
std::vector<Ship> Fleet::get_ships() {
	vector<Ship> ships = {
		aircraft_carrier_,
		battleship_,
		destroyer_,
		pt_boat_,
		submarine_
	};
	return ships;
}

// get_ship_by_id
Ship Fleet::get_ship_by_id(std::string id) {
	for (std::vector<Ship>::iterator it = this->get_ships().begin(); it != this->get_ships().end(); ++it) {
		if (id.compare(*it->get_id()) == 0) {
			return *it;
		}
	}
}
