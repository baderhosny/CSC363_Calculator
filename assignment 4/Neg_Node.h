#ifndef _NEG_NODE_H_
#define _NEG_NODE_H_

class Visitor;
#include "Binary_Expr_Node.h"

class Neg_Node : public Binary_Expr_Node
{
    public:

    Neg_Node(void);

    Neg_Node(Expr_Node *, Expr_Node *);

    virtual void accept(Visitor & V);

};

#endif
