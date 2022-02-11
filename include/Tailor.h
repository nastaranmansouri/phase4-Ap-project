
#include <iostream>
#include <string>

#ifndef TAILOR_H
#define TAILOR_H
//class definition
class Tailor
{
    public:

        Tailor(std::string ="unknown"); //default constructor

        void set_tailor_name(std::string &);    //set tailor name
        std::string get_tailor_name() const;    //return tailor name


    private:
        std::string tailor_name;    //for save the tailor or user name
};

#endif // TAILOR_H
