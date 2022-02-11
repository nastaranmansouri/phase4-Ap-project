#include "shape.h"


std::string shape::getAddressOfPic()
{
	return myState[nowState].getaddressOfPicture();
}


state shape::getStatenow()
{
	return myState[nowState];
}



