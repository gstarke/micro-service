#ifndef SHIP_HPP_
#define SHIP_HPP_

#include<vector>
#include<map>

#include "Coordinate.hpp"
#include "Fleet.hpp"

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

	// get_position_absolute
	const Coordinate& get_position_absolute() const;

	// set_position_absolute
	void set_position_absolute(const Coordinate& value);

	// get_id
	const std::string& get_id() const;

	// set_id
	void set_id(const std::string& value);

	// get_orientation
	const ShipOrientation get_orientation() const;

	// set_orientation
	void set_orientation(const ShipOrientation value);

	// is_sunk
	bool is_sunk();

	// length
	const virtual int get_length() const = 0;

	// maximum_pending_orders
	const virtual int maximum_pending_orders() const = 0;

	// maximum_pending_orders
	const virtual bool can_perform_recon() const = 0;

protected:
	// InitializeDamage
	void InitializeDamage();

private:
	// position_absolute_
	Coordinate position_absolute_ = Coordinate(0, 0);

	// position_relative_
	Coordinate position_relative_ = Coordinate(0, 0);

	// orientation_
	ShipOrientation orientation_;

	// damage_
	std::vector<bool> damage_;

	// id_
	std::string id_;

	// fleet_name_
	std::string fleet_name_;
};

#endif // !SHIP_HPP_
