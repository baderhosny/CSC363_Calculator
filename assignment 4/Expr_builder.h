#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUIDLER_H_

class Expr_Builder
{
    public:
        virtual void build_add_node(void) = 0;
        virtual void build_neg_node(void) = 0;
        virtual void build_multi_node(void) = 0;
        virtual void build_div_node(void) = 0;
        virtual void build_mod_node(void) = 0;
        virtual void build_num_node(void) = 0;
};

#endif