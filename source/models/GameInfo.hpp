#ifndef GAMEINFO_HPP_
#define GAMEINFO_HPP_

#include<list>

// GameInfo
class GameInfo {
public:
	// Players
	std::list<PlayerInfo> players;

	// battle_field_width
	int battle_field_width;

	// battle_field_height
	int battle_field_height;
}

#endif // !GAMEINFO_HPP_