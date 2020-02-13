#ifndef _INFOFORPLAYER_HPP_
#define_INFOFORPLAYER_HPP_

#include<list>

class InfoForPlayer {
public:
	// Players
	list<PlayerInfo> Players;

	// BattleFieldWidth
	int BattleFieldWidth;

	// BattleFieldHeight
	int BattleFieldHeight;
};

#endif // !_INFOFORPLAYER_HPP_

