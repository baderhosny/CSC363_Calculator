#include "Num_Command.h"

Num_Command::Num_Command(void)
{

}
Num_Command::Num_Command(int number)
    : stack_num_(number)
{

}
Num_Command::~Num_Command(void)
{

}
void Num_Command::execute(void)
{
    // not sure what to do if im going the right direction or not
    //push(stack_num_);
}
int Num_Command::evaluate(int num)
{
    return num;
}
