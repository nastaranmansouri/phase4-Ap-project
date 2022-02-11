#pragma once
#include "shape.h"
#include <array>
#include <SFML\Audio.hpp>
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Network.hpp>
#include <SFML\Window.hpp>
#ifndef PLAYGAME_H
#define PLAYGAME_H

class playGame
{
	std::array<std::array<shape*, 1>, 4> gameBackground;
	//shape* gameBackground[5][5];
public:
	void assingGameBackground();
	void statrtPage();
	void gamePage();
	void freeObj();
	~playGame();


};

#endif // !GAMEPLAY
