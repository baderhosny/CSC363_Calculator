#ifndef _CONCRETE_FACTORY_H_
#define _CONCRETE_FACTORY_H_

#include "Expr_Command_Factory.h"

class Concrete_Factory : public Expr_Command_Factory
{
    Concrete_Factory(void);
    ~Concrete_Factory(void);

    virtual Add_Command * create_add_command(void);
    virtual Div_Command * create_div_command(void);
    virtual Mod_Command * create_mod_command(void);
    virtual Neg_Command * create_neg_command(void);
    virtual Num_Command * create_num_command(int number);
    virtual Multi_Command * create_multi_command(void);
};

#endif