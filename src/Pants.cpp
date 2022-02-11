//Pants.cpp definition

#include <iostream>
#include <string>

#include "Pants.h"

using namespace std;


Pants::Pants()
{
    set_pants_size();
    set_belt();
}


void Pants::set_pants_size()
{
    string pSize;
    cout<<"Choose the size you want."<<endl<<"Long OR Short?\t";
    cin>>pSize;

    if((pSize=="long")||(pSize=="Long"))
    {
        pants_size="long";
    }
    else if((pSize=="short")||(pSize=="Short"))
    {
        pants_size="short";
    }
    else
    {
        throw invalid_argument("You entered an invalid value");
    }
}

void Pants::set_belt()
{
    char ch;
    cout<<"Do you want your pants to have a belt?(y/n)";
    cin>>ch;
    switch(ch)
    {
    case 'y':
    case 'Y':
      exist_belt=true;
        break;
    case 'n':
    case 'N':
        cout<<"OK"<<endl;
        break;
    default:
        cout<<"Input value is incorrect!!./a"<<endl;
    }
}
Pants::~Pants()
{
    //dtor
}
