#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Expr_Node.h"

class Expr_Tree
{
    public:
        Expr_Tree(void);

        ~Expr_Tree(void);

        Expr_Node * get_head(void);

        void set_head(Expr_Node *);

    protected:

        Expr_Node * head_;
};
#endif
