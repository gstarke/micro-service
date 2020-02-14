#ifndef SHIP_HPP_
#define SHIP_HPP_

#include "Coordinate.hpp"

// ShipOrientation
enum ShipOrientation {
	Vertical = 0,
	Horizontal
};

// Ship
class Ship {
public:
	// Constructor
	Ship(std::string fleet_name);

	// get_damage
	const std::vector<bool>& get_damage() const;

	// set_damage
	void set_damage(const std::vector<bool>& value);

	// get_fleet_name
	const std::string &get_fleet_name() const;

	// set_fleet_name
	void set_fleet_name(const std::string& value);

	// get_position_relative
	const Coordinate& get_position_relative() const;

	// set_position_relative
	void set_position_relative(const Coordinate& value);

protected:
	// length
	const virtual int get_length() const;

	// InitializeDamage
	void InitializeDamage();

private:
	// position_absolute_
	Coordinate position_absolute_ = Coordinate(0, 0);

	// position_relative_
	Coordinate position_relative_ = Coordinate(0, 0);

	// orientation_
	ShipOrientation orientation_;

	// id_
	std::string id_;

	// damage_
	std::vector<bool> damage_;

	// fleet_name_
	std::string fleet_name_;
};

#endif // !SHIP_HPP_