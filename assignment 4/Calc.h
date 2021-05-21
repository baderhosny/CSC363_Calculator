#ifndef _CALC_H_
#define _CALC_H_

#include <sstream>
#include "Visitor_Node.h"
#include "Expr_Treebuilder.h"

class Calc
{
    public:
        Calc(void);

        ~Calc(void);

        int calculate(const std::string & infix);
        

    protected:
       Expr_TreeBuilder * builder_;

};
#endif