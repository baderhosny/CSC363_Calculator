#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

#include "Binary_Op_Command.h"

class Mod_Command : public Binary_Op_Command
{
    public:

            Mod_Command(void);
            
            ~Mod_Command(void);
            
            int evaluate(int n1, int n2);

            int importance(void);
};

#endif