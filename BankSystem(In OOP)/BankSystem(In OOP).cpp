#include <iostream>
#include "clsLoginScreen.h"

using namespace std;

template <typename T> T MyMax(T number, T number1)
{

    return number + number1;
}


int main()
{
    while (true) 
    {

        if (!clsLoginScreen::ShowLoginScreen())
            break;

    }  
     


}




