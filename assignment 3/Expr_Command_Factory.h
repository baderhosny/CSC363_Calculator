#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

#include "Add_Command.h"
#include "Neg_Command.h"
#include "Multi_Command.h"
#include "Div_Command.h"
#include "Num_Command.h"
#include "Mod_Command.h"

class Expr_Command_Factory
{
    // these will create command objects for each command
    public:
            Expr_Command_Factory(void);

            virtual ~Expr_Command_Factory(void);

            virtual Add_Command * create_add_command(void) = 0;
            virtual Div_Command * create_div_command(void) = 0;
            virtual Mod_Command * create_mod_command(void) = 0;
            virtual Neg_Command * create_neg_command(void) = 0;
            virtual Num_Command * create_num_command(int number) = 0;
            virtual Multi_Command * create_multi_command(void) = 0;


    private:
            Expr_Command_Factory(const Expr_Command_Factory &);
            const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};

#endif