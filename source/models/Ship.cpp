#include "Ship.hpp"

// ArraySize
template<typename T, std::size_t sz>
std::size_t ArraySize(const T(&arr)[sz])
{
	return sz;
}

std::ostream& operator<<(std::ostream& out, const ShipOrientation value) {
	static std::map<ShipOrientation, std::string> strings;
	if (strings.size() == 0) {
#define INSERT_ELEMENT(p) strings[p] = #p
		INSERT_ELEMENT(Vertical);
		INSERT_ELEMENT(Horizontal);
#undef INSERT_ELEMENT
	}

	return out << strings[value];
}

// Constructor
Ship::Ship(std::string fleet_name) : fleet_name_(fleet_name) {
	InitializeDamage();
}

// get_damage
const std::vector<bool>& Ship::get_damage() const
{
	return this->damage_;
}

// set_damage
void Ship::set_damage(const std::vector<bool>& value)
{	
	this->damage_ = std::vector<bool>(value);
}

// get_fleet_name
const std::string& Ship::get_fleet_name() const
{
	return this->fleet_name_;
}

// set_fleet_name
void Ship::set_fleet_name(const std::string& value)
{
	this->fleet_name_.assign(value);
}

// get_position_relative
const Coordinate& Ship::get_position_relative() const
{
	return this->position_relative_;
}

// set_position_relative
void Ship::set_position_relative(const Coordinate& value)
{
	this->position_relative_ = value;
	if (this->position_relative_.X < 0 || this->position_relative_.X > Fleet::kRegionSize)
	{
		throw std::out_of_range("Relative X coordinate cannot be less than 0 or greater than 9 since it is relative to fleet's absolute location.");
	}
	if (this->position_relative_.Y < 0 || this->position_relative_.Y > Fleet::kRegionSize)
	{
		throw std::out_of_range("Relative Y coordinate cannot be less than 0 or greater than 9 since it is relative to fleet's absolute location.");
	}
}

// get_position_absolute
const Coordinate& Ship::get_position_absolute() const
{
	return this->position_absolute_;
}

// set_position_absolute
void Ship::set_position_absolute(const Coordinate& value)
{
	this->position_absolute_ = value;
}

// get_id
const std::string& Ship::get_id() const
{
	return this->id_;
}

// set_id
void Ship::set_id(const std::string& value)
{
	this->id_.assign(value);
}

// get_orientation
const ShipOrientation Ship::get_orientation() const
{
	return this->orientation_;
}

// set_orientation
void Ship::set_orientation(const ShipOrientation value)
{
	this->orientation_ = value;
}

// InitializeDamage
void Ship::InitializeDamage() {
	this->damage_ = std::vector<bool>(this->get_length(), false);
}

// IsSunk
bool Ship::IsSunk() {
	for (std::vector<bool>::iterator it = this->damage_.begin(); it != this->damage_.end(); ++it) {
		if (!*it) {
			return false;
		}
	}
	return true;
}

// ExecuteOrder
void Ship::ExecuteOrder(Order order)
{
	if (IsSunk()) {
		return;
	}
}
