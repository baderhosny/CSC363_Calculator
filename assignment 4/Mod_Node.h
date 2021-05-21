#ifndef _MOD_NODE_H_
#define _MOD_NODE_H_

#include "Binary_Expr_Node.h"


class Mod_Node : public Binary_Expr_Node
{
    public:

    Mod_Node(void);

    Mod_Node(Expr_Node *, Expr_Node *);

    virtual void accept(Visitor & V);

};

#endif
