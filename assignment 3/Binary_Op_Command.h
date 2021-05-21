#ifndef _BINARY_OP_COMMAND_H
#define _BINARY_OP_COMMAND_H

#include "Expr_Command.h"

class Binary_Op_Command : public Expr_Command
{
    public:

        Binary_Op_Command(void);

        virtual ~Binary_Op_Command();

        virtual int evaluate(int n1, int n2)= 0;

        void execute(Stack<int> & stack);
};

#endif
