#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include "Visitor.h"

class Expr_Node
{
    public:
        Expr_Node(void);

        Expr_Node(Expr_Node *, Expr_Node *);

        ~Expr_Node();

        virtual int evaluate() = 0;

        virtual void accept(Visitor & V) = 0;
};

#endif