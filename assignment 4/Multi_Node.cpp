#include "Multi_Node.h"


Multi_Node::Multi_Node(void)
{
    this->right_=nullptr;
    this->left_ = nullptr;
}

Multi_Node::Multi_Node(Expr_Node * n1, Expr_Node * n2)
{
    this->right_ = n1;
    this->left_ = n2;
}
void Multi_Node::accept(Visitor & V) 
{
    // V(*this);
}
