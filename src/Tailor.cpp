#include "Tailor.h"
#include <iostream>
#include <string>
using namespace std;


Tailor::Tailor(string  name)    //Implement a constructor that replaces the
{                               //default value of the unknown tailor name.
    set_tailor_name(name);
}

void Tailor::set_tailor_name(string & name)     //This function saves it in variable tailor_name
{                                               //after the user enters the tailor's name.
    tailor_name=name;
}

string Tailor::get_tailor_name()const       //This function returns the tailor name.
{
    return tailor_name;
}

