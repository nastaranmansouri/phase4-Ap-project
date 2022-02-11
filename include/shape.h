#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include "state.h"
#ifndef SHAPE_H
#define SHAPE_H


class shape
{


public:

	std::string getAddressOfPic();
	state getStatenow();
protected:
	int nowState;
	std::vector<state>myState;
};

#endif // !SHAPE_H

