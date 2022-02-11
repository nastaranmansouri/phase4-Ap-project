#include<iostream>
#include <string>

#ifndef COLOR_H
#define COLOR_H

//class definition
class Color
{
    public:
        Color(std::string = "white");   //default constructor
        void set_color(std::string);    //set color for fabric
        std::string get_color()const;   //return color of fabric

    private:
        std::string fab_color;
};

#endif // COLOR_H
