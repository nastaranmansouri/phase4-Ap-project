#pragma once

#include <vector>
#include <string>
#include <array>
#ifndef STATE_H
#define STATE_H


class state
{
private:

	std::string addressOfPicture;

public:

	state(std::string);
	std::string getaddressOfPicture();

};

#endif // !STATE_H
