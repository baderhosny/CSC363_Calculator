#include "Postfix.h"

Postfix::Postfix(void)
{

}
Postfix::~Postfix()
{

}
int importance(std::string infix) 
{
    int importance = 0;

    if(infix == "+" || infix == "-") {
        importance = 1;
    }
    else if (infix == "*" || infix == "/" || infix == "%") {
        importance = 2;
    }
    return importance;
}
std::string in_post_conversion(const std::string input & infix, Concrete_Factory & factory, Array <Expr_Command *> & Postfix)
{
    std::istringstream input(infix);
    std::string token;
    std::string postfix;
    Expr_Command * cmd = 0;
    Stack <Expr_Command *> temp;

    while(!input.eof()) 
    {
        input >> token;
        if(token == "+") 
        {
            cmd = factory.create_add_command();
        }
         else if(token == "/")
        {
            cmd = factory.create_div_command();
        }

        else if(token == "%")
        {
            cmd = factory.create_modulo_command();
        }
            
         else if(token == "*")
        {
             cmd = factory.create_multi_command();
         }
            
        else if(token == "-")
        {
            cmd = factory.create_neg_command();
        }
        else if (token == "(") 
        {
            temp.push(token);    
        }
        else if (token == ")")
        {
            while(temp.top() != "(")
            {
                temp.pop();
            }
        } else {
            std::cout << infix;
        }
    }

}