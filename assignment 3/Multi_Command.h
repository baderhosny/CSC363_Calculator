#ifndef _MULTI_COMMAND_H_
#define _MULTI_COMMAND_H_

#include "Binary_Op_Command.h"

class Multi_Command : public Binary_Op_Command
{
    public:
            Multi_Command(void);

            ~Multi_Command();

            int evaluate(int n1, int n2);

            int importance(void);
};

#endif