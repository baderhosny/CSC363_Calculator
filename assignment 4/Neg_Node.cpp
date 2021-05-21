#include "Neg_Node.h"


Neg_Node::Neg_Node(void)
{
    this->right_=nullptr;
    this->left_ = nullptr;
}

Neg_Node::Neg_Node(Expr_Node * n1, Expr_Node * n2)
{
    this->right_ = n1;
    this->left_ = n2;
}
void Neg_Node::accept(Visitor & V) 
{
    // V(*this);
}
