#include <iostream>
#include <string>
#include <vector>

#include"Manto.h"
#include "Pants.h"

#ifndef DESIGN_H
#define DESIGN_H



class Design : public Manto , public Pants
{
    public:
        Design();
        void choose_design();
        void set_design(std::string);
        std::string get_design()const;
        void save_design();
        std::string get_save_design();

    private:

    std::string type_des;
    //vector <std::string> selected_design ();  //save designs
};

#endif // DESIGN_H
