#ifndef _EXPR_TREEBUILDER_H_
#define _EXPR_TREEBUILDER_H_

#include "Add_Node.h"
#include "Neg_Node.h"
#include "Mod_Node.h"
#include "Div_Node.h"
#include "Num_Node.h"
#include "Multi_Node.h"
#include "Expr_Node.h"

class Expr_TreeBuilder : public Expr_Builder
{
    public:
        Expr_TreeBuilder(void);

        ~Expr_TreeBuilder(void);

        Expr_Tree * get_tree(void);

        virtual void build_num_node(int);
        virtual void build_add_node(void);
        virtual void build_neg_node(void);
        virtual void build_mod_node(void);
        virtual void build_div_node(void);
        virtual void build_multi_node(void);

    
    protected:
        Expr_Tree * tree_;
};

#endif