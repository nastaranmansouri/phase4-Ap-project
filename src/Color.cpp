#include <iostream>
#include <string>

#include "Color.h"

using namespace std;


Color::Color(string col)       //Sets white by default.
{
    set_color(col);
}

void Color::set_color(string col)   //This function saves it in variable fab_color.
{
    fab_color=col;
}

string Color::get_color()const       //This function returns the fabric color.
{
    return fab_color;
}
