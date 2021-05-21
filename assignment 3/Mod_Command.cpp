#include "Mod_Command.h"

Mod_Command::Mod_Command(void)
{

}
Mod_Command::~Mod_Command(void)
{

}
int Mod_Command::evaluate(int n1, int n2)
{
    return n1%n2;
}
int Mod_Command::importance(void)
{
    return 1;
}