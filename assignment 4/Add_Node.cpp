#include "Add_Node.h"


Add_Node::Add_Node(void)
{
    this->right_=nullptr;
    this->left_ = nullptr;
}

Add_Node::Add_Node(Expr_Node * n1, Expr_Node * n2)
{
    this->right_ = n1;
    this->left_ = n2;
}
void Add_Node::accept(Visitor & V) 
{
    // V(*this);
}
