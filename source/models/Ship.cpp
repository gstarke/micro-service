#include<vector>

#include "Ship.hpp"
#include "Fleet.hpp"

// ArraySize
template<typename T, std::size_t sz>
std::size_t ArraySize(const T(&arr)[sz])
{
	return sz;
}

// Constructor
Ship::Ship(std::string fleet_name) : fleet_name_(fleet_name) {
	InitializeDamage();
}

// InitializeDamage
void Ship::InitializeDamage() {
	this->damage_ = std::vector<bool>(this->get_length(), false);
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