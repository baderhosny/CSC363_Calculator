#include "Binary_Op_Command.h"

Binary_Op_Command::Binary_Op_Command(void)
{

}
Binary_Op_Command::~Binary_Op_Command(void)
{

}
void Binary_Op_Command::execute(Stack<int> & stack)
{
    int n1, n2;
    n2 = stack.top();
    stack.pop();

    n1 = stack.top();
    stack.pop();

    int result = this->evaluate(n1,n2);
    stack.push(result);

}
