//#include "Calc.h"
#include <string>
#include <iostream>
int main()
{
    std::string input;

    bool keepGoing = true;

    while(keepGoing) {
        std::cout << "Enter an equation" << std::endl;
        std::getline(std::cin,input);

        if(input == "QUIT") {
            keepGoing = false;
            std::cout <<"Thanks" << std::endl;
        } else {
            keepGoing = true;

            //std::cout << solution_ <<std::endl;
        }
        

    }
}