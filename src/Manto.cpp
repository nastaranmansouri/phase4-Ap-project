//Manto.cpp definition

#include <iostream>
#include <string>
#include "Design.h"
#include "Manto.h"

using namespace std;

Manto::Manto()
{
    string choose;
    char response=' ';
    for(int i=1;i<=2;i++)
    {
        cout<<"**** Button\tOR\tBrooch ****"<<endl;
        cin>>choose;


        if ((choose=="button")||(choose=="Button")||(choose=="brooch")||(choose=="Brooch"))
        {

            if((choose=="button")||(choose=="Button"))
            {
                response='b';
            }
            if((choose=="brooch")||(choose=="Brooch"))
            {
            response='r';
            }
        }
        else
        {
            throw invalid_argument("You entered an invalid value\nSo let's go to the next step");
        }

        switch (response)
        {
        case 'b':
            set_button();
            break;
        case 'r':
            set_brooch();
            break;
        default:
            throw invalid_argument("You entered an invalid value\nSo let's go to the next step");
        }
        if(2==i)
        {
            cout<<"So let's go to the next step"<<endl;
            break;
        }
    }
}

void Manto::set_button()
{

    cout<<"Set the Button!";

    exist_button = true;

    cout<<endl;



}


void Manto::set_brooch()
{


    cout<<"Set the Brooch!";

    exist_brooch = true;

    cout<<endl;



}


