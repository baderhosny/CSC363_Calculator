#include "Num_Node.h"


Num_Node::Num_Node(int n)
    : num_(n)
{
    
}

int Num_Node::evaluate()
{
    return num_;
}

Num_Node::Num_Node(Expr_Node * n1, Expr_Node * n2)
{
    this->right_ = n1;
    this->left_ = n2;
}
void Num_Node::accept(Visitor & V) 
{
    // V(*this);
}
