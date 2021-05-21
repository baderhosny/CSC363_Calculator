#ifndef _POSTFIX_H_
#define _POSTFIX_H_

#include <iostream>
#include <sstream>
#include "Concrete_Factory.h"
#include "Expr_Command.h"
#include "Stack.h"

class Postfix
{
    public:
            Postfix(void);

            ~Postfix();

            int importance(std::string infix)

            void evaluate_postfix(Array<Expr_Command *> postfix);

            std::string in_post_conversion(const std::string input & infix, Concrete_Factory & factory, Array <Expr_Command *> postfix);

            
}