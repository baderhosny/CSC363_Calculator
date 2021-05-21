#ifndef _DIV_NODE_H_
#define _DIV_NODE_H_
class Visitor;
#include "Binary_Expr_Node.h"


class Div_Node : public Binary_Expr_Node
{
    public:

    Div_Node(void);

    Div_Node(Expr_Node *, Expr_Node *);

    virtual void accept(Visitor & V);

};

#endif
