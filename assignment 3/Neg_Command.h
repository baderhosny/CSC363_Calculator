#ifndef _NEG_COMMAND_H_
#define _NEG_COMMAND_H_

#include "Binary_Op_Command.h"

class Neg_Command : public Binary_Op_Command
{
    public:
            Neg_Command(void);

            ~Neg_Command();

            int evaluate(int n1,int n2);

            int importance(void);
};

#endif