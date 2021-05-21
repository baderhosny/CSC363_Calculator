#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

#include "Stack.h"

class Expr_Command 
{
    public:

    Expr_Command(void);

    Expr_Command(Stack<int> & stack);

    virtual ~Expr_Command(void);

    virtual void execute(Stack<int> & stack) = 0;
};

#endif