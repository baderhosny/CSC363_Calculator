#include "Stack.h"
#include "Array.h"
#include "Concrete_Factory.h"
#include "postfix.h"
#include <iostream>
#include <sstream>
// COMMENT: You are to implement a complete program per the assignment
// instructions.

//RESPONSE, tried to complete the main.cpp.
int main() 
{
    //still in progress
    bool = keepGoing = true
    std::string input = "";
    std::cout << "Enter an expression please\n";
    std::getline(std::cin, input);
    while(input != "QUIT") {
	keepGoing = true;
        Array <Expr_Command *> cmd;
        in_post_conversion(input,cmd);
	

    } else {
        keepGoing = false;
        std::cout << "Exiting program\n";
    }
	return 0;

}
