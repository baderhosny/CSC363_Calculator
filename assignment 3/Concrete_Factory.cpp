#include "Concrete_Factory.h"

Concrete_Factory::Concrete_Factory(void)
{

}
Concrete_Factory::~Concrete_Factory(void)
{

}
Add_Command * Concrete_Factory::create_add_command()
{
    return new Add_Command();
}
Div_Command * Concrete_Factory::create_div_command(void)
{
    return new Div_Command();
}
Mod_Command * Concrete_Factory::create_mod_command()
{
    return new Mod_Command();
}
Num_Command * Concrete_Factory::create_num_command(int number)
{
    return new Num_Command(number);
}
Neg_Command * Concrete_Factory::create_neg_command()
{
    return new Neg_Command();
}

