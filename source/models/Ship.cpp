#include "Ship.hpp"
#include "Fleet.hpp"

// ArraySize
template<typename T, std::size_t sz>
std::size_t ArraySize(const T(&arr)[sz])
{
	return sz;
}

// Constructor
Ship::Ship(std::string fleet_name) {
	this->fleet_name_.assign(fleet_name);
	InitializeDamage();
}

// InitializeDamage
void Ship::InitializeDamage() {
	this->damage_ = new bool[this->length];
	for (int i = 0; i < ArraySize(this->damage_); i++)
	{
		this->damage_[i] == false;
	}
}

// get_damage
const bool[] Ship::get_damage() const
{
	return this->damage_;
}

// set_damage
void Ship::set_damage(const bool[] damage)
{	
	std::copy(std::begin(damage), std::end(damage), std::begin(damage_));
}

// get_fleet_name
const std::string Ship::get_fleet_name() const
{
	return this->fleet_name_;
}

// set_fleet_name
void Ship::set_fleet_name(const std::string fleet_name)
{
	this->fleet_name_.assign(fleet_name);
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
	if (this->position_relative_.X < 0 || this->position_relative_.X > Fleet.kRegionSize)
	{
		throw std::out_of_range("Relative X coordinate cannot be less than 0 or greater than 9 since it is relative to fleet's absolute location.");
	}
	if (this->position_relative_.Y < 0 || this->position_relative_.Y > Fleet.kRegionSize)
	{
		throw std::out_of_range("Relative Y coordinate cannot be less than 0 or greater than 9 since it is relative to fleet's absolute location.");
	}
}