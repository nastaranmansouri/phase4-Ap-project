#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

#include "Design.h"
#include "Manto.h"
#include "Pants.h"


using namespace std;

Design::Design()
{
    choose_design();
}

void Design::choose_design()
{
    string str;

    cout<<"Choose the design you want:";
    cout<<"\t 1.Manto\t 2.Pants:\t";

    cin>>str;
    set_design(str);

    cout<<endl;
}

void Design::set_design(string des)
{
    type_des=des;
    //selected_design.push_back(type_des);
    if((type_des=="Manto")||(type_des=="manto"))
    {
       try
       {
           Manto manto;
       }
       catch (invalid_argument &e)
       {
           cout << "Exception occurred: " << e.what() << endl;

       }
    }
    else if((type_des=="Pants")||(type_des=="pants"))
    {
       try
       {
          Pants pants;
       }
       catch (invalid_argument &e)
       {
           cout << "Exception occured: " << e.what() << endl;

       }

    }
    else
    {
        throw invalid_argument("incorrect value");
    }
    save_design();


}

string Design::get_design()const
{
    return type_des;
}

void Design::save_design()
{
    string str;
    str=get_design();
    //selected_design.push_back(str);
}

string Design::get_save_design()
{
//    return selected_design;
}

