#include "Div_Command.h"

Div_Command::Div_Command(void)
{

}
Div_Command::~Div_Command(void)
{

}
int Div_Command::evaluate(int n1, int n2)
{
    if(n2 == 0) {
        throw std::out_of_range("error");
    }
    return n1 / n2;
}
int Div_Command::importance(void)
{
    // return
}


