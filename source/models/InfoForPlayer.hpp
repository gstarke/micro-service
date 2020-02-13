#ifndef _INFOFORPLAYER_HPP_
#define_INFOFORPLAYER_HPP_

#include<list>

class InfoForPlayer {
public:
	// Players
	std::list<PlayerInfo> players;

	// battle_field_width
	int battle_field_width;

	// battle_field_height
	int battle_field_height;
};

#endif // !_INFOFORPLAYER_HPP_