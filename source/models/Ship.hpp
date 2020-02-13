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
	// get_damage
	const bool[] get_damage() const;

	// set_damage
	void set_damage(const bool[] value);

	// get_fleet_name
	const std::string &get_fleet_name() const;

	// set_fleet_name
	void set_fleet_name(const std::string &value);

	// get_position_relative
	const Coordinate &get_position_relative() const;

	// set_position_relative
	void set_position_relative(const Coordinate &value);

protected:
	// length
	virtual int length;

	// InitializeDamage
	void InitializeDamage();

private:
	// position_absolute_
	Coordinate position_absolute_ = new Coordinate(0, 0);

	// position_relative_
	Coordinate position_relative_ = new Coordinate(0, 0);

	// orientation_
	ShipOrientation orientation_;

	// damage_
	bool[] damage_;

	// id_
	std::string id_;

	// fleet_name_
	std::string fleet_name_;

	// Constructor
	Ship(std::string fleet_name);

};

#endif // !SHIP_HPP_

