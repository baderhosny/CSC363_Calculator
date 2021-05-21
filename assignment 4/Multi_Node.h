#ifndef _MULTI_NODE_H_
#define _MULTI_NODE_H_
class Visitor;

#include "Binary_Expr_Node.h"

class Multi_Node : public Binary_Expr_Node
{
    public:

    Multi_Node(void);

    Multi_Node(Expr_Node *, Expr_Node *);

    virtual void accept(Visitor & V);

};

#endif
