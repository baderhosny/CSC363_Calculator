#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

#include "Expr_Command.h"

class Num_Command : public Expr_Command
{
    public:

            Num_Command(void);

            Num_Command(int number);

            ~Num_Command();

            int evaluate(int num);

            void execute(void);

            int importance(void);

    private:

            int stack_num_;
            // int stacker;

};

#endif