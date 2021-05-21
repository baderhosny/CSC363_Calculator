#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"

class Binary_Expr_Node : public Expr_Node
{
    public:
        Binary_Expr_Node(void);

        Binary_Expr_Node(Expr_Node *, Expr_Node *);

        virtual ~Binary_Expr_Node(void);

        virtual int evaluate();

        Expr_Node * getRight(void);
        Expr_Node * getLeft(void);

    protected:
        Expr_Node * right_;
        Expr_Node * left_;
};

#endif