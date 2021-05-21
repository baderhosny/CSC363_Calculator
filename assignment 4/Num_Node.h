#ifndef _NUM_NODE_H_
#define _NUM_NODE_H_
class Visitor;
#include "Binary_Expr_Node.h"


class Num_Node : public Binary_Expr_Node
{
    public:

    Num_Node(int n);

    Num_Node(Expr_Node *, Expr_Node *);

    virtual int evaluate(void);

    virtual void accept(Visitor & V);

    protected:

        int num_;
};

#endif
