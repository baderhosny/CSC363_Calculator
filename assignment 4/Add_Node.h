#ifndef _ADD_NODE_H_
#define _ADD_NODE_H_
class Visitor;

#include "Binary_Expr_Node.h"

class Add_Node : public Binary_Expr_Node
{
    public:

    Add_Node(void);

    Add_Node(Expr_Node *, Expr_Node *);

    virtual void accept(Visitor & V);

};

#endif
