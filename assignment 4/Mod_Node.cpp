#include "Mod_Node.h"


Mod_Node::Mod_Node(void)
{
    this->right_=nullptr;
    this->left_ = nullptr;
}

Mod_Node::Mod_Node(Expr_Node * n1, Expr_Node * n2)
{
    this->right_ = n1;
    this->left_ = n2;
}
void Mod_Node::accept(Visitor & V) 
{
    // V(*this);
}
