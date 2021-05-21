#include "Expr_Tree.h"

Expr_Tree::Expr_Tree(void)
{

}
Expr_Tree::~Expr_Tree(void)
{

}

Expr_Node * Expr_Tree::get_head(void)
{
    return this->head_;
}
void Expr_Tree::set_head(Expr_Node * head_node)
{
    this->head_ = head_node
}
