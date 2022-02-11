//Pants.h definition

#include <iostream>
#include <string>

#ifndef PANTS_H
#define PANTS_H


class Pants
{
    public:
        Pants();

        void set_pants_size();
        void set_belt();

        virtual ~Pants();


    private:
        bool exist_belt=false;
        std::string pants_size;
};

#endif // PANTS_H
