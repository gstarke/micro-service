#include<list>

#ifndef GAMEINFO_HPP_
#define GAMEINFO_HPP_

// GameInfo
class GameInfo {
public:
	// Players
	list<PlayerInfo> Players;

	// BattleFieldWidth
	int BattleFieldWidth;

	// BattleFieldHeight
	int BattleFieldHeight;
}

#endif // !GAMEINFO_HPP_
